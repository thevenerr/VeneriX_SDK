# VeneriX SDK

The official SDK for the [VeneriX](https://github.com/thevenerr/VeneriX) game engine. Use this repository as a starting point for a new VeneriX game — it includes the compiled engine binaries, headers, and a minimal CMake project ready to build.

## Requirements

- CMake 3.15+
- A C++17 compiler (MSVC recommended on Windows)
- [vcpkg](https://github.com/microsoft/vcpkg) with `glm`, `glfw3`, and `imgui` installed

## Getting started

1. Clone this repository
2. Make sure `VeneriX_SDK/bin/` contains `venerix.dll` and its dependencies (e.g. `glfw3.dll`)
3. Configure with CMake, pointing to your vcpkg toolchain file:

   ```bash
   cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE="<path-to-vcpkg>/scripts/buildsystems/vcpkg.cmake"
   ```

4. Build:

   ```bash
   cmake --build build
   ```

5. Run the resulting `MyGame` executable from `build/`

## Project structure

```
VeneriX_SDK/
├── include/      VeneriX engine headers
├── lib/          Import libraries (.lib)
└── bin/          Runtime binaries (.dll)

App.cpp           Starter game entry point — edit this
CMakeLists.txt    Build configuration
```

## Writing your game

`App.cpp` contains a minimal scene and application setup. See the [engine documentation](https://thevenerr.github.io/VeneriX/api.html) for the full API reference and usage examples.

## License

MIT — see [LICENSE](LICENSE).
