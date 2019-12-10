### Overview

This is an example project showing xtensor used as a subdirectory target in CMake.

The current (mainline) issue is xtensor's `find_library(xtl)` which exepcts an installed version of xtl. 

In this project's modified xtensor branch, we instead first check for the `xtl` target, and then fallback to `find_library(xtl)`.
In this way, we allow `xtl` target to be added via `add_subdirectory`.

e.g.
```
// CMakeLists.txt

add_subdirectory(.../xtl)
add_subdirectory(.../xtensor)

target_link_libraries(<target> ... xtensor)
```

### Build Instructions

```
git clone ..
git submodule update --init
mkdir build && cd build
cmake -GNinja ..
ninja
xtensorexample.exe
```