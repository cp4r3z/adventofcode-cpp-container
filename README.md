# Advent of Code

CPP Solution(s) in Dev Container

## Build

From working directory:

```
cmake . -B build
```

Or from build directory:

```
cmake ..
make
```

## Run

```
./AOCCCP
```

## Questions

### Code Structure

1. Are there "best practices" or convensions? Can I use a linter to adhere to them?
1. How to support multiple solutions without having a repo for each or having to run all solutions?

### VSCode

1. What's c_cpp_properties and why is it specifying a C++ version?

### Build

1. `g++` "simple" build vs CMake

### CMake

1. Do I really have to add _all_ executables/libraries? `add_executable(tests src/solution01.cpp)` or is there an easier way?
1. What's a kit? Is that a compiler? Which one to use?

### CPP

1. Which "version" of C++ to use?
1. Garbage collection?
1. << vs ()
