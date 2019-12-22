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

### Results could be seen in: BraveCoverage/test/build/lcoverage/src/index.html
![Screenshot from 2019-12-22 17-26-01](https://user-images.githubusercontent.com/27175864/71325163-d26f3880-24e0-11ea-8a18-25dc94d9a153.png)

![Screenshot from 2019-12-22 17-26-33](https://user-images.githubusercontent.com/27175864/71325184-08142180-24e1-11ea-9ab8-92c7180047fb.png)

### Results could be seen in: BraveCoverage/test/build/lcoverage/test/src/index.html
![Screenshot from 2019-12-22 17-25-21](https://user-images.githubusercontent.com/27175864/71325145-91772400-24e0-11ea-918b-2b5711ba4f36.png)

![Screenshot from 2019-12-22 17-27-28](https://user-images.githubusercontent.com/27175864/71325188-1a8e5b00-24e1-11ea-80e4-fffb6c6d1261.png)
