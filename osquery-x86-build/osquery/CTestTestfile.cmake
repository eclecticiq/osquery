# CMake generated Testfile for 
# Source directory: C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/osquery
# Build directory: C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(osquery_tests "osquery_tests")
add_test(osquery_additional_tests "osquery_additional_tests")
add_test(osquery_tables_tests "osquery_tables_tests")
subdirs("config")
subdirs("core")
subdirs("database")
subdirs("devtools")
subdirs("dispatcher")
subdirs("distributed")
subdirs("events")
subdirs("extensions")
subdirs("filesystem")
subdirs("logger")
subdirs("registry")
subdirs("sql")
subdirs("remote")
subdirs("utils")
subdirs("carver")
subdirs("../external")
subdirs("tables")
