# Advent of Code

[![cp4r3z>](https://circleci.com/gh/cp4r3z/adventofcode-cpp-container.svg?style=shield)](https://app.circleci.com/pipelines/github/cp4r3z/adventofcode-cpp-container)

**Solution(s) to the annual https://adventofcode.com/ programming puzzles**

* Written in C++
* Developed in [Remote Dev Container](https://code.visualstudio.com/docs/remote/containers)
* Unit Tested by [GoogleTest](https://github.com/google/googletest/)

## Build

From working directory:

```
cmake . -B build
```

Or from `build` directory:

```
cd build
cmake ..
make
```

## Run

From `build`

```
./AOCCCP
```

## Run Tests

From `build`

```
./tests
```

## References

### Repository and Unit Test Setup

[Pascal Kraft](https://medium.com/@kraft.pascal) - [Article on Level Up Coding - gitconnected.com](https://levelup.gitconnected.com/how-to-combine-c-cmake-googletest-circleci-docker-and-why-e02d76c060a3)

## ETC

[EtCetera.md](EtCetera.md)