#[[------------------------------------------

	-------------------------------
	sg-0's cmake script
	-------------------------------
	
	Project: Generic

---------------------------------------------]]# 

add_executable(addressof addressof.c)
add_executable(addressof2 addressof2.c)
add_executable(addr_struct addr_struct.c)
add_executable(bitwise bitwise.c)
add_executable(char_array char_array.c)
add_executable(char_array2 char_array2.c)
add_executable(commandline commandline.c)
add_executable(convert convert.c) 
add_executable(convert2 convert2.c)
add_executable(datatype_sizes datatype_sizes.c)
add_executable(dtors_sample dtors_sample.c)
add_executable(fmt_strings fmt_strings.c)
add_executable(fmt_uncommon fmt_uncommon.c)
add_executable(fmt_uncommon2 fmt_uncommon2.c)
add_executable(fmt_vuln fmt_vuln.c)
add_executable(fmt_vuln2 fmt_vuln2.c)
add_executable(funcptr_example funcptr_example.c)
add_executable(game_of_chance game_of_chance.c)
target_include_directories(game_of_chance PUBLIC ${INCLUDE_DIR})
add_executable(heap_example heap_example.c)
add_executable(input input.c)
add_executable(no1 no1.c)
add_executable(overflow_example overflow_example.c)
add_executable(pointer pointer.c)
add_executable(pointer_types pointer_types.c)
add_executable(pointer_types2 pointer_types2.c)
add_executable(pointer_types3 pointer_types3.c)
add_executable(pointer_types4 pointer_types4.c)
add_executable(pointer_types5 pointer_types5.c)
add_executable(rand_example rand_example.c)
add_executable(scope scope.c)
add_executable(scope2 scope2.c)
add_executable(scope3 scope3.c)
add_executable(time_example time_example.c)
add_executable(time_example2 time_example2.c)
