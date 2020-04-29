### CMake and GoogleTest with VSCode

This is an example project showing how to use Google Test with VSCode. CMake will automatically download GoogleTest from Github. There is no need to download it yourself.

You'll need the [CMakeTools] and the [TestAdapter] extension.

#### Getting Started

First: Use the **CMake: Configure** command to setup CMake and download google test

Next: Use the **CMake: Build** command or click the *Build:* button in status bar at the bottom of the window

Finally: Go over to the **Run** menu to run the program in the debugger, or the **Test** menu to run your tests.

*Note: not tested on Linux, you'll proably need to remove the [MiMode Line](./.vscode/launch.json) from launch.json

--------

Useful links

CMake Tools VSCode Extention [help](https://vector-of-bool.github.io/docs/vscode-cmake-tools/index.html)

CMake Project with GoogleTest [help](https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html)

VSCode launch.json [help](https://code.visualstudio.com/docs/cpp/launch-json-reference)
(Look here for help to configure arguments)

[TestAdapter]: https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter
[CMakeTools]: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools