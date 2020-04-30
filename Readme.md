## CMake and GoogleTest

This is an example project showing how to use Google Test with CMake. CMake will automatically download GoogleTest from Github. There is no need to download it yourself. These instructions are written for VS Code, but the CMakeList files should work for CLion as well.

If you're using VS Code, you'll need the [CMakeTools] and the [TestAdapter] extensions. Also install CMake, version 3.14.5 or higher.  

### Getting Started

**First**: Use the **CMake: Configure** command to setup CMake and download google test. If it asks for a [kit], choose the compiler you'd like to use (for my machine Clang 11.0.3 is appropriate)

**Next**: Use the **CMake: Build** command or click the **Build:** button in status bar at the bottom of the window

**Finally**: Go over to the **Run** menu to run the program in the debugger, or the **Test** menu to run your tests. 

### Helpful Hints
*Note: not tested on Linux, if you're using g++/gdb, you'll probably need to remove the **"MIMode": "lldb"** from [launch.json](./.vscode/launch.json). (For some reason it won't run lldb otherwise)

In [src/CMakeLists.txt](./src/CMakeLists.txt) there is a line where you'll need to put all the source files and headers you want CMake to compile. Make sure you update this when you add files or change filenames. In don't worry about doing the same for the *test* folder, it will find every file that ends in **-tests.cpp** just make sure you run **CMake: Configure** when you add a new test *file*.

Click in the gutter to the left of the line numbers to set a breakpoint. You can even debug tests by clicking the bug icon in the test navigator.

### Useful links

CMake Tools VSCode Extension [help](https://vector-of-bool.github.io/docs/vscode-cmake-tools/index.html)

CMake Project with GoogleTest [help](https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html)

VSCode launch.json [help](https://code.visualstudio.com/docs/cpp/launch-json-reference)
(Look here for help to configure arguments)

[TestAdapter]: https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter
[CMakeTools]: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools
[kit]: https://vector-of-bool.github.io/docs/vscode-cmake-tools/getting_started.html#selecting-a-kit