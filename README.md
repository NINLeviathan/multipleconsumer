# multipleconsumer

## Purpose

This repo is part of a series of repos used to test a meson setup.  
This repo is to make use of files placed in subfolders, each representing a project, housed in this general repos. Each project will be using subprojects, like described in the [Meson wrap dependency system manual](https://mesonbuild.com/Wrap-dependency-system-manual.html)  

## Prerequisites

g++ compiler  
Meson build system

## Projects

To build code in project1  
  
To build code in project2  

To build code in project3  

## Build with Meson

To build one of these projects with the Meson build system, enter the project folder.

```sh
cd project<N>
```

Then run

```sh
meson setup builddir<N>
```

Enter the resulting builddir

```sh
cd <builddir<N>
```

And compile the project

```sh
meson compile
```