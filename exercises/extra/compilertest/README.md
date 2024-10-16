# Compiler test
## Building
This CMake project verifies if your build environment is capable of building all exercises. The key requirements are your compiler's support for C++20 features and CMake.

- For GCC, you need at least version 10.1.
- For Clang, the minimum supported version is 11.
- CMake version 3.0

If your current setup doesn't meet these requirements, or if you're using an older version of CMake/Clang/GCC and don't want to modify your system, there’s an Alpine-based Docker container provided
that includes the correct GCC version and CMake in **Dockerfile**. The container is also a handy solution if you're using Windows or need a clean, isolated environment for building.
If you use the container, its best to volume mount the compilertest sources using the -v start-up parameter.
The example below assumes that **<PATH_TO_COMPILERTEST_FOLDER>** is replaced with an actual path on your system. It should be replaced with the path to the folder where this README.md file is located in.
- Build the container
```
docker build -t cpptraining <PATH_TO_COMPILERTEST_FOLDER>
```
- Build and run the test binary in the container
```
docker run --rm -v <PATH_TO_COMPILERTEST_FOLDER>:/source cpptraining /bin/sh -c "cmake -B /build -S /source ; cmake --build /build; /build/compilerTest"
```
If you are not using a container you can build the compilerTest binary using the commands from the second code snippet. The paths '/build' and '/source' may have to be updated to something
that works on your system.
## Expected result
Expected output when running the compilerTest binary:
```
Coroutine check OK
Concept check OK
```
There should not be any build errors.

