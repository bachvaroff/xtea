nasko@midian:~/var/git/xtea$ ./keygen.sh | head -n 1
8c8c5328 87dfd355 fb992ebd 6913b47e 
nasko@midian:~/var/git/xtea$ ./xtea_encode 8c8c5328 87dfd355 fb992ebd 6913b47e 'hello world'
-------- ENCODE BEGIN stderr --------
eeb520b5
06a0db3f
801de863
c4c46e49
-------- ENCODE END stderr --------
nasko@midian:~/var/git/xtea$ ./xtea_decode 8c8c5328 87dfd355 fb992ebd 6913b47e eeb520b5 06a0db3f 801de863 c4c46e49
-------- DECODE BEGIN stderr --------
hello world
-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/var/git/xtea$ ./keygen.sh | head -n 1
99e6b451 c34b38ba 15d9bcbb f6e3b5ab 
nasko@midian:~/var/git/xtea$ ./xtea_encode 99e6b451 c34b38ba 15d9bcbb f6e3b5ab 'hello world'
-------- ENCODE BEGIN stderr --------
95f42e7c
d94fc164
35726aad
d97f7a52
-------- ENCODE END stderr --------
nasko@midian:~/var/git/xtea$ ./xtea_decode 99e6b451 c34b38ba 15d9bcbb f6e3b5ab 95f42e7c d94fc164 35726aad d97f7a52
-------- DECODE BEGIN stderr --------
hello world
-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/var/git/xtea$ 
