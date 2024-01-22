# ft_kit

Create types. Operate on types. Convert types. That's how ft_kit works.

A type can represent anything. It needs an ID to identify it in the typenode, an address which is the result of the malloc.

**The implementation details of each type don't matter as long as the API is stable**. Consider an API change as a breaking change.

For each type allocated, a typenode is created and inserted into the typetree. If you destroy it, it will be destroyed in the typetree as well.

For each type you invent you should let the program know the exact function to destroy that type and to create it. You should do it by adding info to the map which will be read in the beginning of the program.

This is the typekit. Install it on your computer and be happy!

Yes, yes. Why not a CLI so that you can just create a new project
and have some functionality like a decent Makefile by default?

Typekit could be just a lib but it can also be a framework, which
is likely better. As a CLI tool you can do whatever you want.

What would an user want?

- A default structure for a project (consider it will appear on GitHub this way):
	build
	source
	tests
	Makefile
	README.md

- Easy send to vogsphere command: ( just check for norminette, remove whatever is not necessary from the project (README and tests) and send it. )

- Easy build command. Maybe not makefile then. Just create a Makefile before sending to vogsphere.

- Easy check command.. to check norminette

- Easy test command to run tests

typekit is the name of the lib

This will take a while, but you have another week, don't you?

kit create
kit check
kit build
kit submit
kit test