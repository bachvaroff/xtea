nasko@midian:~/git/github/xtea$ ./keygen.sh > keys
nasko@midian:~/git/github/xtea$ grep -e '^[56] ' keys
5 2058d858 b53550aa 9cddb30e fe05d7b8 
6 65cf8dae 9a042ce7 59ff7064 a0dcfeb9 
nasko@midian:~/git/github/xtea$ echo 'проф. дохтор Чавдарлийска, дърта шаврантия; доц. дохтор Бирен, вече дестилиран; мангал-манаф (по библейски) многоПознатов, обикновен манаф' | ./xtea_encode 65cf8dae 9a042ce7 2058d858 b53550aa 9cddb30e fe05d7b8 | tee out
-------- ENCODE BEGIN stderr --------
-------- ENCODE END stderr --------
1828243b f90f4c80 
c01378fc 544f022c 
7af02ce3 3eb08694 
b954b89f 4e2d32f0 
f49c6d1a 571e2434 
efea6d7f cb53d746 
7c14d931 9a15f1cf 
de21d7fd 32ca52eb 
c00b1ef9 98d1b541 
8c504418 3f4c27a6 
ec90ddb3 c312511e 
7071df48 922c9e76 
5b2342fa 9d0a6d27 
05f33a96 4791b0b5 
4f89d090 024ff560 
4456a0c2 30bd0c2a 
705b30ce 448255a9 
76113768 62660512 
917ae4a1 f6142550 
2051ea14 bd155e10 
a6389118 f74ab5b2 
ba070b3c 7c57dbcd 
6f5be6e9 55df2f44 
7823ae3a d7275100 
f3a8aad7 14e32d8e 
a968d5ad 177013fd 
5f1c7e0f c97f1bc4 
4b1d6a82 4ba1d0f2 
fafe15b5 04d82450 
da8bbf2c 4876e344 
4f215a6e b88c6f0a 
8f2b8f07 c4cc00af 
nasko@midian:~/git/github/xtea$ ./xtea_decode 65cf8dae 9a042ce7 2058d858 b53550aa 9cddb30e fe05d7b8 < out
-------- DECODE BEGIN stderr --------
проф. дохтор Чавдарлийска, дърта шаврантия; доц. дохтор Бирен, вече дестилиран; мангал-манаф (по библейски) многоПознатов, обикновен манаф

-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/git/github/xtea$ grep -e '^[17] ' keys
1 283c67bd 27efa820 37359cea 6a2c2324 
7 d2176ff9 48f5a3d3 2448a9a2 99e93d81 
nasko@midian:~/git/github/xtea$ base64 < /bin/ls | ./xtea_encode 283c67bd 27efa820 d2176ff9 48f5a3d3 2448a9a2 99e93d81 | ./xtea_decode 283c67bd 27efa820 d2176ff9 48f5a3d3 2448a9a2 99e93d81 | base64 -di > ls
-------- DECODE BEGIN stderr --------
-------- ENCODE BEGIN stderr --------
-------- ENCODE END stderr --------

-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/git/github/xtea$ md5sum /bin/ls
586256cbd58140ec8c3b2c910cf80c27  /bin/ls
nasko@midian:~/git/github/xtea$ md5sum ./ls
586256cbd58140ec8c3b2c910cf80c27  ./ls
nasko@midian:~/git/github/xtea$ 
