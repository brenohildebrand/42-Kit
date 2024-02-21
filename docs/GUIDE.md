# Guide

Welcome stranger! 
This is the official guide to the *ft_framework*. I hope you have a great time here.


## I mean, why not?

I was struggling with C. I wanted to use hash tables. Oh, but they don't exist. Dynamic arrays? Sorry, what's that? Maybe a string? Unfortunately that's not happening. Hmm. And what about memory management? Can I just exit the program and be happy? No, there may be a leak. Oh, so can I just call one function and be free? No, it's not how it works. Damn it!

I wanted to be able to focus on the problem. I just hate it to keep paying attention to those nitty-gritty details that nobody cares about when using a more high level language like Python.

So out of frustation I started looking for solutions. I experimented quite a lot before getting to something cool. I tried different approaches and tried to combine them in many ways. I even got inspired to create a programming language. It seems like a rewarding adventure. Maybe one day. Who knows? Anyways, I got to something I'm proud of.

Welcome to **ft_framework**! Or, as I prefer to call it, **Trillian**. Enjoy!


## It works on my machine.

Before getting to the deep dive, you should make it works on yours too. So get ready!

The following code will download and run the installer. Just copy and paste it on your terminal. 

```bash
wget https://raw.githubusercontent.com/brenohildebrand/ft_framework/main/tools/installer/install.sh -q -O install.sh && ./install.sh; rm -rf install.sh
```

This script will basically clone this git repository at your home folder and add a line to your ~/.bashrc or ~/.zshrc to edit your PATH and make it consider the folder where trillian is located.

You can also install it manually. Just clone the repository, update /config/.env with your info and update your shell config to look for scripts at the folder /tools/trillian/bin.

## Bring your best towel!

If you don't already know, a project using this framework can be initialized with ```trillian init```. It will create the directories needed and you can start coding right away.

Every source code you create should be under source and every test should be under tests.

trillian is a cool and helpful tool

You got to use types and functions

two ways to build your code ... build and debug  
run with trillian run

create your own types  
expand the framework

system call errors will make the program to exit  
if you want to avoid that check for whatever you need before calling the function  
(i.e. check if path exists before creating a file)

## Go hack it!

Congratulations for reading this far. Now you know how to use the wannabe famous *ft_framework*. Since you got the power you can do whatever you want with it. Make it better, make it yours. And if you fell like contributing just check out [this](./CONTRIBUTING.md).

May your code be bug-free. See ya!