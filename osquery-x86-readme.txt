Steps to build osquery-x86(Release)on 64 bit platform

1) Checkout code from osquery-x86
2) Install 64 bit choco packages.
3) Replace 64 bit third-party libraries in path c:\programdata\chocolately\lib with 32 bit libraries from folder choco-third-party-x86-libs
4) Run .\tools\make-win64-dev-env from osquery folder
5) Run .\tools\make-win64-binaries from osquery folder
6) 32 bit osquery libs and binaries would be generated in build folder
7) pre-compiled 32 osquery libs and binaries can also be found in osquery-x86-build folder
