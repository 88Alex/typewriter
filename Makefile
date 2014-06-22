test: buildtest runtest
buildtest: g++ -Wall test/test.cpp -o test
runtest: test/test
