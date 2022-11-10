nasko@midian:~/git/github/xtea$ ./keygen.sh > keys
nasko@midian:~/git/github/xtea$ grep -e '^[56] ' keys
5 2058d858 b53550aa 9cddb30e fe05d7b8 
6 65cf8dae 9a042ce7 59ff7064 a0dcfeb9 
nasko@midian:~/git/github/xtea$ echo 'проф. дохтор Чавдарлийска, дърта курва от ЦУ; доц. дохтор Бирен, ЦУ, вече пукнал; мангал-манаф (по библейски) Познатов, обикновен педераст' | ./xtea_encode 65cf8dae 9a042ce7 2058d858 b53550aa 9cddb30e fe05d7b8 | tee out
-------- ENCODE BEGIN stderr --------
-------- ENCODE END stderr --------
1828243b f90f4c80 
c01378fc 544f022c 
7af02ce3 3eb08694 
b954b89f 4e2d32f0 
f49c6d1a 571e2434 
efea6d7f cb53d746 
7c14d931 9a15f1cf 
3d11630c be787e1e 
a244b334 a0b3b621 
cda19c30 18dd1697 
6b32b996 9442e9ac 
5b942693 4a7eb786 
d1bbe344 f932d769 
dea29704 31cd6935 
43031fc9 9845600a 
cb1e5abd 395a120b 
0598cccc 3273316a 
d50c7fa0 4333c893 
801b701d 4ae33c55 
7bda173d 741cd5fa 
8864581c ffc34997 
9ddfd126 e592e72b 
ed874b06 60ac382c 
96df8ad1 d83770f8 
76c3042a 2b53327e 
152ff4fc cf19b91b 
2ab9e2a2 e484bf78 
c803c6d6 aa32d1ef 
c666ed97 4415e0a3 
56aa8c80 2d8f35fc 
f7082b83 99878ec2 
nasko@midian:~/git/github/xtea$ ./xtea_decode 65cf8dae 9a042ce7 2058d858 b53550aa 9cddb30e fe05d7b8 < out
-------- DECODE BEGIN stderr --------
проф. дохтор Чавдарлийска, дърта курва от ЦУ; доц. дохтор Бирен, ЦУ, вече пукнал; мангал-манаф (по библейски) Познатов, обикновен педераст

-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/git/github/xtea$ 

