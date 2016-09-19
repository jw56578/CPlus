1) removed the default folders that are created by visual studio because this isn't required and you don't need them
	--Header, resource source
2) changed the warning level to level 4 in properties c++ for all configurations

3)building in visual studio does everything for you and hides some stuff going on
 -- if you just do a compile alone, it will turn every source file into a compiled .obj file
 --this doesn't create the executable or consumable file
 -- you then have to use the linker to combine eveything into one file
 -- the linker is like webpack, it looks for the obj file with the main function in it and starts traversing
 ----the includes the put everything together into one file.