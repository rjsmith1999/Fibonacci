#### Example Project showing how to use CMake and GoogleTest with VSCode

You'll need the [CMake Tools] and the [TestAdapter] extension.

First: Use the **CMake: Configure** command to setup CMake and download google test

Next: Use the **CMake: Build** command or click the *Build:* button in status bar at the bottom of the window

Finally: Go over to the run menu to run the program in the debugger, or the Test menu to run your tests.

Note: To make it work on linux you'll _at least_ need to change *lldb* to *gdb* in [launch.json](.vscode/launch.json)

[TestAdapter]: https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter
[CMake Tools]: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools