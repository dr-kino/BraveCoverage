# BraveCorage
Code coverage startup for C++ project using GCov and LCov

# Build Application
mkdir build && cd build
cmake ..
make

# Build Test/Coverage 
cd test && mkdir build && cd build
cmake ..
make init
make gcov
make lcov

# Software usage
./BraveCoverage --help
  --help            produce help message
  --value_a arg     set value a
  --value_b arg     set value b
  --sum             execute sum operation

# Test Results


