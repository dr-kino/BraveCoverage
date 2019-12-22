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


# Code/Test Coverage Results

![Screenshot from 2019-12-22 17-25-21](https://user-images.githubusercontent.com/27175864/71325145-91772400-24e0-11ea-918b-2b5711ba4f36.png)

![Screenshot from 2019-12-22 17-26-01](https://user-images.githubusercontent.com/27175864/71325163-d26f3880-24e0-11ea-8a18-25dc94d9a153.png)

