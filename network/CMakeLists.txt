#[[------------------------------------------

	-------------------------------
	sg-0's cmake script
	-------------------------------
	
	Project: Generic

---------------------------------------------]]# 

# add server executables

add_executable(simple_server server/simple_server.c)
target_include_directories(simple_server PUBLIC ${INCLUDE_DIR})
add_executable(tinyweb server/tinyweb.c)
target_include_directories(tinyweb PUBLIC ${INCLUDE_DIR})
add_executable(tinywebd server/tinywebd.c)
target_include_directories(tinywebd PUBLIC ${INCLUDE_DIR})

# copy server files

file(COPY server/webroot DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/webroot)

# add attack executables

add_executable(bind_port attack/bind_port.c)
#add_executable(bind_port_asm attack/bind_port.s)
#add_executable(bind_shell attack/bind_shell.s)
#add_executable(bind_shell_beta attack/bind_shell_beta.s)
#add_executable(connectback_shell attack/connectback_shell.s)
#add_executable(decode_sniff attack/decode_sniff.c)
#target_include_directories(decode_sniff PUBLIC ${INCLUDE_DIR})
#add_executable(encoded_sockreuserestore attack/encoded_sockreuserestore.s)
#add_executable(encoded_sockreuserestore_dbg attack/encoded_sockreuserestore_dbg.s)
add_executable(host_lookup attack/host_lookup.c)
target_include_directories(host_lookup PUBLIC ${INCLUDE_DIR})
add_executable(raw_tcpsniff attack/raw_tcpsniff.c)
target_include_directories(raw_tcpsniff PUBLIC ${INCLUDE_DIR})
#add_executable(rst_hijack attack/rst_hijack.c)
#target_include_directories(rst_hijack PUBLIC ${INCLUDE_DIR})
#add_executable(shroud attack/shroud.c)
#add_executable(socket_reuse_restore attack/socket_reuse_restore.s)
#add_executable(synflood attack/synflood.c)
add_executable(tinyweb_exploit attack/tinyweb_exploit.c)
target_include_directories(tinyweb_exploit PUBLIC ${INCLUDE_DIR})
add_executable(tinyweb_exploit2 attack/tinyweb_exploit2.c)
target_include_directories(tinyweb_exploit2 PUBLIC ${INCLUDE_DIR})
#add_executable(tiny_shell attack/tiny_shell.s)
add_executable(webserver_id attack/webserver_id.c)
target_include_directories(webserver_id PUBLIC ${INCLUDE_DIR})

# copy shell attack scripts

file(COPY attack/xtool_tinywebd.sh DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd.sh)
file(COPY attack/xtool_tinywebd_cback.sh DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd_cback.sh)
file(COPY attack/xtool_tinywebd_reuse.sh DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd_reuse.sh)
file(COPY attack/xtool_tinywebd_silent.sh DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd_silent.sh)
file(COPY attack/xtool_tinywebd_spoof.sh DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd_spoof.sh)
file(COPY attack/xtool_tinywebd_steath.sh DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/xtool_tinywebd_steath.sh)
