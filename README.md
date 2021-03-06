# Break_it_all
I am learning a little bit about OpenGL and this is a repository to put in practice my knowledge.
I am trying to create a simple brick breaking game.

You can build a Android version using Android Studio or a desktop version building it using CMake on Linux.

## Build in Linux
Clone the project in your home directory
```console
$ git clone https://github.com/simonppg/Break_it_all.git
$ cd Break_it_all/app/src/main/cpp/
$ mkdir linux-build
$ cd linux-build
$ cmake ..
$ make all
```
run the tests
```console
$ cd Break_it_all/app/src/main/cpp/linux-build
$ make all test
```

to run the examples
```console
$ cd Break_it_all/app/src/main/cpp/linux-build
$ make run
```

or

```console
$ cd Break_it_all/app/src/main/cpp/linux-build
$ make all
$ ./linuxLauncher <no_example>
```

### build dependencies
I am using the GLFW and mesa libs, so install it first.
```console
$ sudo apt-get install libglfw3-dev libgles2-mesa-dev
```
### test dependencies
```console
$ sudo apt-get install libgtest-dev
$ sudo apt-get install cmake
$ cd /usr/src/gtest
$ sudo cmake CMakeLists.txt
$ sudo make
$ sudo cp *.a /usr/lib
```

## Run tests
```console
$ make check
```
