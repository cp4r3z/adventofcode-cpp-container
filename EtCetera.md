# Questions / Ideas

## Code Structure

1. Are there "best practices" or convensions? Can I use a linter to adhere to them?
1. It seems like other devs create an `include` folder as a sibling of src. Thoughts?
1. How to support multiple solutions without having a repo for each or having to run all solutions?

## VSCode

1. What's c_cpp_properties and why is it specifying a C++ version?

## Dev Container

1. What kind of performance hit am I taking? Compiling takes... 15 seconds?

## Build

1. `g++` "simple" build vs CMake

## CMake

1. Do I really have to add _all_ executables/libraries? `add_executable(tests src/solution01.cpp)` or is there an easier way?
1. What's a kit? Is that a compiler? Which one to use?

## CPP

1. Which "version" of C++ to use?
1. Garbage collection?
1. << vs ()

# Try Out Development Containers: C++

This is a sample project that lets you try out the **[VS Code Remote - Containers](https://aka.ms/vscode-remote/containers)** extension in a few easy steps.

> **Note:** If you're following the quick start, you can jump to the [Things to try](#things-to-try) section.

## Setting up the development container

Follow these steps to open this sample in a container:

1. If this is your first time using a development container, please follow the [getting started steps](https://aka.ms/vscode-remote/containers/getting-started).

2. To use this repository, you can either open the repository in an isolated Docker volume:

    - Press <kbd>F1</kbd> and select the **Remote-Containers: Try a Sample...** command.
    - Choose the "C++" sample, wait for the container to start and try things out!
        > **Note:** Under the hood, this will use **Remote-Containers: Open Repository in Container...** command to clone the source code in a Docker volume instead of the local filesystem.

   Or open a locally cloned copy of the code:

   - Clone this repository to your local filesystem.
   - Press <kbd>F1</kbd> and select the **Remote-Containers: Open Folder in Container...** command.
   - Select the cloned copy of this folder, wait for the container to start, and try things out!

## Things to try

Once you have this sample opened in a container, you'll be able to work with it like you would locally.

> **Note:** This container runs as a non-root user with sudo access by default. Comment out `"remoteUser": "vscode"` in `.devcontainer/devcontainer.json` if you'd prefer to run as root.

Some things to try:

1. **Edit:**
   - Open `main.cpp`
   - Try adding some code and check out the language features.
1. **Terminal:** Press <kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>\`</kbd> and type `uname` and other Linux commands from the terminal window.
1. **Build, Run, and Debug:**
   - Open `main.cpp`
   - Add a breakpoint (e.g. on line 7).
   - Press <kbd>F5</kbd> to launch the app in the container.
   - Once the breakpoint is hit, try hovering over variables, examining locals, and more.