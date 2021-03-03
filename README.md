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

# Extra Information

## Google Test Installation

    Clone master resource from google github

    git clone https://github.com/google/googletest.git GoogleTest/

    Install Cmake:

    sudo apt-get install cmake

    Build master Gtest project by Cmake:

    sudo cmake CMakeLists.txt

    sudo make

we will get log information:

```console
   Scanning dependencies of target gmock
    [ 14%] Building CXX object CMakeFiles/gmock.dir/home/xpto/FPT/Softs/GoogleTest/googletest/src/gtest-all.cc.o
    [ 28%] Building CXX object CMakeFiles/gmock.dir/src/gmock-all.cc.o
    Linking CXX static library libgmock.a
    [ 28%] Built target gmock
    Scanning dependencies of target gmock_main
    [ 42%] Building CXX object CMakeFiles/gmock_main.dir/home/xpto/FPT/Softs/GoogleTest/googletest/src/gtest-all.cc.o
    [ 57%] Building CXX object CMakeFiles/gmock_main.dir/src/gmock-all.cc.o
    [ 71%] Building CXX object CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
    Linking CXX static library libgmock_main.a
    [ 71%] Built target gmock_main
    Scanning dependencies of target gtest
    [ 85%] Building CXX object gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
    Linking CXX static library libgtest.a
    [ 85%] Built target gtest
    Scanning dependencies of target gtest_main
    [100%] Building CXX object gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
    Linking CXX static library libgtest_main.a
    [100%] Built target gtest_main
Four static libraries are generate:
libgmock.a  libgmock_main.a  libgtest.a  libgtest_main.a
```
    We need to copy all *.a files to /usr/lib:

    sudo cp *.a /usr/lib

    sudo cp gtest/*.a /usr/lib

    And copy necessary libraries of gmock and gtest to /usr/include

    sudo cp -r include/gmock /usr/include/

    sudo cp -r ../googletest/include/gtest/ /usr/include/

