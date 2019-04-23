$version="master"
$url="https://github.com/google/glog.git"
Write-Host "[+] Building glog version $version"

function Invoke-BatchFile {
param([string]$Path, [string]$Parameters)
  $tempFile = [IO.Path]::GetTempFileName()
  cmd.exe /c " `"$Path`" $Parameters && set > `"$tempFile`" "
  Get-Content $tempFile | Foreach-Object {
    if ($_ -match "^(.*?)=(.*)$") {
      Set-Content "env:\$($matches[1])" $matches[2]
    }
  }
  Remove-Item $tempFile
}

# Setup our environment for VS 2015 x64 building
Invoke-BatchFile "$env:VS140COMNTOOLS\..\..\vc\vcvarsall.bat" amd64

# Creates a new temporary directory
function New-TemporaryDirectory {
    $parent = [System.IO.Path]::GetTempPath()
    [string] $dirname = [System.Guid]::NewGuid()
    $d = New-Item -ItemType Directory -Path (Join-Path $parent $dirname)
    return $parent+$d.name
}

if(-not (Get-Command 7z -ErrorAction SilentlyContinue)) {
  Write-Host "[-] This build requires 7z, which was not found in the PATH. Installing via chocolatey." -foregroundcolor Yellow
  choco install -y 7z -s https://chocolatey.org/api/v2/
}

if(-not (Get-Command msbuild.exe -ErrorAction SilentlyContinue)) {
  Write-Host "[-] Unable to find msbuild.exe in system path. Please ensure you have the .NET runtimes installed" -foregroundcolor Red
  Write-Host "[-] and the msbuild.exe binary is accessible from the command line" -foregroundcolor Red
  exit
}

# Start building the OpenSSL libraries.
$old = Get-Location
$tmp = New-TemporaryDirectory
Set-Location $tmp
#Invoke-WebRequest $url -OutFile "$tmp\glog-$version.zip"
#7z x "glog-$version.zip"
git clone $url
Set-Location "glog"

New-Item -ItemType Directory -Path "cmake-build"
Set-Location "cmake-build"
cmake -G "Visual Studio 14 2015 Win64" -DCMAKE_PREFIX_PATH=C:\ProgramData\chocolatey\lib\gflags\local\lib\ ..

#devenv.exe google-glog.sln /Upgrade
#MSBuild.exe google-glog.sln /p:PlatformToolset=v140 /p:Configuration=Release /p:Platform=Win32

# Copy the libs/headers to their place
Set-Location $old
Copy-Item -Force "$tmp\glog-$version\cmake-build\lib\Release\libglog_static.lib" ..\lib\libglog_static.lib
#Remove-Item -Recurse -Force ..\include\gflags
#Copy-Item -Force -Recurse "$tmp\gflags-$version\cmake-build\include\gflags" ..\include\gflags

# Lastly, create the chocolatey package
Write-Host "[+] gflags libs and include headers have been built for version $version." -foregroundcolor green
Write-Host "Please update the Chocolatey spec and run `choco pack` in the root of this dir to build the chocolatey package." -foregroundcolor green

# Then remove the temp dir used
#Remove-Item -Recurse -Force $tmp
