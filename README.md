# ft_kit

Create types. Operate on types. Convert types. That's how ft_kit works.

A type can represent anything. It needs an ID to identify it in the typenode, an address which is the result of the malloc.

**The implementation details of each type don't matter as long as the API is stable**. Consider an API change as a breaking change.

For each type allocated, a typenode is created and inserted into the typetree. If you destroy it, it will be destroyed in the typetree as well.

For each type you invent you should let the program know the exact function to destroy that type and to create it. You should do it by adding info to the map which will be read in the beginning of the program. 