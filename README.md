nasko@midian:~/var/git/xtea$ openssl md5 /bin/ls
MD5(/bin/ls)= 6d2b4ff5fd937cd034aa2a2cf203e20f
nasko@midian:~/var/git/xtea$ ./xtea_encode 6d2b4ff5 fd937cd0 34aa2a2c f203e20f "hello world"
-------- ENCODE BEGIN stderr --------
bbb36513
382718e8
a469854f
eb4f4059
-------- ENCODE END stderr --------
nasko@midian:~/var/git/xtea$ ./xtea_decode 6d2b4ff5 fd937cd0 34aa2a2c f203e20f bbb36513 382718e8 a469854f eb4f4059
-------- DECODE BEGIN stderr --------
hello world
-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/var/git/xtea$ 