# Modules

Here's where you'll find a detailed description of each module.

**Core**

- [Console](#console)
- [Control](#control)
- [Global](#global)
- [Memory](#memory)
- [Types](#types)

**Extra**

- [Color](#color)
- [Events](#events)

## Memory

### Purpose

The memory module is responsible for managing memory allocation and
deallocation safely. It is also responsible for keeping track of the types
associated with each allocated block.

### Usage

The memory module provides two primary functions: 'allocate' and 'deallocate'.
That's all you need from here.

### Notes

- Under the hood it's a self balanced binary tree.

- Beware that you should use the 'new' and 'delete' functions instead of 'allocate' and 'deallocate' when creating and destroying types.

- If anything goes wrong here, the module will free every allocated memory and exit the program.


## Types

### Purpose

The types module defines the type system of ft_framework. It 

### Usage

### Notes