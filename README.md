# Recursive Algorithms

# Summary

**[1. What's this?](#1-whats-this)**
**[2. The Algorithms](#2-the-algorithms)**
**[3. Compiling](#3-compiling)**
**[4. Using](#4-using)**
**[5. Author](#5-author)**

## 1. What's this?

  This repository is a collection of recursive solutions for general problems created solving a list of exercises delivered by Prof. Selan Rodrigues dos Santos.

## 2. The Algorithms

  The list is solving yet, but you can find the following solutions below:

**- Cannonball**:
  The **Cannonball** algorithm calculates the total number of stacked cannonballs. They are stacked in square-shaped pyramid, like this:
  
                   o
                  o o
                 o o o
                o o o o 
                
  That is, the top ball it's above a square base (let's call the base as layer), the below layer is composed by the power of 2 in layer level (e.g. level 2 layer has 2<sup>2</sup> balls, that is 4 balls).
  
  The recursive solution is calculate the number of balls from the actual layer and sum with all others balls calling the function again until the level layer is 1, so the algorithm return the sum added 1.
  
## 3. Compiling

  The project use [CMake](http://cmake.org), with **CMake** installed in your machine, use `cmake` into project folder, so use `make` to create executable file.
  
## 4. Using

  The project has been constructed for execute many algorithms same time.
  > You may use `--help` command line for understand better the use
  To use the algorithms you must type:
  `--algoption <algorithm_name> [parameters...]`
  
  - For **Cannonball** use:
  `--algoption cb [height]`
  
## 5. Author

  The project was created by Victor Raphaell Vieira Rodrigues, I.T. student from **Universidade Federal do Rio Grande do Norte - [UFRN](http://ufrn.br) at Instituto Metrópole Digital - [IMD](http://imd.ufrn.br).**
  
  Follow me on [instagram](http://instagram.com/victorvieirar). 
  Email me at < _victor@agenciaatwork.com_ > 🤩
