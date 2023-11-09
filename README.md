# Learn C Language

This repository is my documentation of learning C programming language from Didiet Noor ([Koding Aja Dulu](https://www.youtube.com/@KodingAjaDulu)).

## How to run the code?

This repository uses GCC and CMake build system. So, make sure these two package is already installed.

```bash
# installation on Debian-based Linux
sudo apt install build-essential cmake
```

First, navigate to the desired directory (example, `pointer-project`).

```bash
cd pointer-project
```

Create `build` directory.

```bash
mkdir build
```

Navigate to the `build` directory.

```bash
cd build
```

Generate `Makefile` of current project.

```bash
cmake -G "Unix Makefiles" ..
```

Begin the compilation process.

```bash
make
```

Then you can find the binary executable in the `build` directory, so that you can run it.

```bash
# assumming you are in the build directory
./pointer
```

Then, the output will be printed on user's console/terminal.


