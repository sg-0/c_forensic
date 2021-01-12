#[[------------------------------------------

	-------------------------------
	sg-0's cmake script
	-------------------------------
	
	Project: Generic

---------------------------------------------]]# 

add_executable(aslr_demo aslr_demo.c ${src_includes})
add_executable(aslr_execl aslr_execl.c ${src_includes})
add_executable(aslr_execl_exploit aslr_execl_exploit.c ${src_includes})
add_executable(auth_overflow auth_overflow.c ${src_includes})
add_executable(auth_overflow2 auth_overflow2.c ${src_includes})
add_executable(dissembler dissembler.c ${src_includes})
add_executable(drop_privs drop_privs.c ${src_includes})
add_executable(exec_shell exec_shell.c ${src_includes})
#add_executable(exec_shell_asm exec_shell.s ${src_includes})
add_executable(exploit_notesearch exploit_notesearch.c ${src_includes})
add_executable(exploit_notesearch_env exploit_notesearch_env.c ${src_includes})
add_executable(fcntl_flags fcntl_flags.c ${src_includes})
add_executable(find_jmpesp find_jmpesp.c ${src_includes})
add_executable(getenvaddr getenvaddr.c ${src_includes})
add_executable(getenv_example getenv_example.c ${src_includes})
#add_executable(loopback_shell loopback_shell.s ${src_includes})
#add_executable(loopback_shell_restore loopback_shell_restore.s ${src_includes})
#add_executable(mark mark.s ${src_includes})
#add_executable(mark_break mark_break.s ${src_includes})
#add_executable(mark_restore mark_restore.s ${src_includes})
add_executable(notesearch notesearch.c ${src_includes})
target_include_directories(notesearch PUBLIC ${INCLUDE_DIR})
add_executable(notetaker notetaker.c ${src_includes})
target_include_directories(notetaker PUBLIC ${INCLUDE_DIR})
#add_executable(printable printable.s ${src_includes})
add_executable(printable_helper printable_helper.c ${src_includes})
#add_executable(priv_shell priv_shell.s ${src_includes})
#add_executable(shellcode shellcode.s ${src_includes})
add_executable(simplenote simplenote.c ${src_includes})
add_executable(uid_demo uid_demo.c ${src_includes})
