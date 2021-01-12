<<<<<<< HEAD
#[[------------------------------------------

	-------------------------------
	sg-0's cmake script
	-------------------------------
	
	Project: Generic

---------------------------------------------]]# 


=======
>>>>>>> 6b727b04376bc0a5e139820c7fab5e63411094e8
# add server executables

add_executable(simple_server simple_server.c ${src_includes})
add_executable(tinyweb tinyweb.c ${src_includes})
add_executable(tinywebd tinywebd.c ${src_includes})

# copy server files

file(COPY server/webroot DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/webroot)

# add attack executables

add_executable(bind_port bind_port.c ${src_includes})
add_executable(bind_port bind_port.s ${src_includes})
add_executable(bind_shell bind_shell.s ${src_includes})
add_executable(bind_shell_beta bind_shell_beta.s ${src_includes})
add_executable(connectback_shell connectback_shell.s ${src_includes})
add_executable(decode_sniff decode_sniff.c ${src_includes})
add_executable(encoded_sockreuserestore encoded_sockreuserestore.s ${src_includes})
add_executable(encoded_sockreuserestore_dbg encoded_sockreuserestore_dbg.s ${src_includes})
add_executable(host_lookup host_lookup.c ${src_includes})
add_executable(raw_tcpsniff raw_tcpsniff.c ${src_includes})
add_executable(rst_hijack rst_hijack.c ${src_includes})
add_executable(shroud shroud.c ${src_includes})
add_executable(socket_reuse_restore socket_reuse_restore.s ${src_includes})
add_executable(synflood synflood.c ${src_includes})
add_executable(tinyweb_exploit tinyweb_exploit.c ${src_includes})
add_executable(tinyweb_exploit2 tinyweb_exploit2.c ${src_includes})
add_executable(tiny_shell tiny_shell.s ${src_includes})
add_executable(webserver_id webserver_id.c ${src_includes})

# copy shell attack scripts

configure_file(xtool_tinywebd.sh ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd.sh COPYONLY)
configure_file(xtool_tinywebd_cback.sh ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd_cback.sh COPYONLY)
configure_file(xtool_tinywebd_reuse.sh ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd_reuse.sh COPYONLY)
configure_file(xtool_tinywebd_silent.sh ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd_silent.sh COPYONLY)
configure_file(xtool_tinywebd_spoof.sh ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd_spoof.sh COPYONLY)
configure_file(xtool_tinywebd_steath.sh ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd_steath.sh COPYONLY)
