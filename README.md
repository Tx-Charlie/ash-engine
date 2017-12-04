# atview

An cross-platform 3D model viewer for learning purpose, based on OpenGL, Assimp, FreeImage, and AntTweakBar.

## Features

* Supports reading 40+ 3D file formats, including FBX, DXF, Collada, Obj, X, PLY, 3DS.
* Supports popular texture formats like PNG, BMP, JPEG, TIFF.
* Provides multiple viewing options. You can toggle lighting, texture, the polygon mode and so on.
* Shows FPS, camera position, and some OpenGL configurations on bars.
* Press `<F10>` to take screenshots. (BMP only)

## Shortcomings

* DO NOT support Linux.
* Uses OpenGL 1.1 API, which can cause low performance.

## Screenshots

On Microsoft Windows 10 Pro:

![](https://img.masterliu.net/atview/atview-win.jpg)

On Apple macOS 10.13:

![](https://img.masterliu.net/atview/atview-macos.jpg)

## How to use

Only command-line interface is supported currently. Pass the path of model as arguments, for example:

```
atview rock/rock.obj
```

## Build

You don't need to download any third-party libraries. I have put them together with the source code.

For macOS, clone this repository and type `make` to build.

For Windows, just download the VS2017 project from the "release" page and build it. All `*.dll` and `*.lib` are included.