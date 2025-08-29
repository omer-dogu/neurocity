# neurocity
Not every wound is on the body. Some lie deep in the mind.

## Features
- Written in modern C++ (C++17)
- Clean and modular code structure (Player, Game classes)
- Console interface with dynamic player information display
- Easily extensible game flow

## Requirements
- CMake (version 3.10 or higher)
- GCC (MinGW-w64 recommended, with C++17 support)

## Build Instructions
1. Create a build directory and configure the project:
    ```
    cmake -S . -B build -G "MinGW Makefiles
    ```

2. Build the project:
    ```
    cmake --build build -j
    ```

3. Run the game:
    ```
    .\build\neurocity.exe
    ```
