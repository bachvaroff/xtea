nasko@midian:~/git/github/xtea$ ./keygen.sh 
0 d04a1f71 52fe5b05 10bced39 f434cbda 
1 66194376 c33ec5d4 f9b0d795 ea70ef8f 
2 424a2928 1d40f541 f58ca731 8c15d8c4 
3 86c79158 f9fc9ddf 04f1f8ff 2d02c1f8 
4 5074d516 b8551a6f fb0df788 b629cd05 
5 c9e95180 a9fe934b eca166e6 6c62e77c 
6 beb09e3b 855afcf5 dc4b27d7 6397d4a3 
7 5726381c 5c175e31 ff7b45fa 7cc85537 
8 f9968656 bae4768f dd1c712e 66271d05 
9 fd2f06ff cf4af2d0 88580b4e e34ed7f0 
10 c25a65db 88830135 e0940c56 3b38d620 
11 4ee88df1 a0ea57ca 87641057 be446f30 
12 09815aa1 d7a59ba4 fb022b3e 84a17e47 
13 26777bb2 080ec301 aed8a490 4e4df850 
14 4a679770 6a01bde6 7568158f 2a5019bb 
15 0b00cebb a8b74c2c 6656db7d cbdb8202 
nasko@midian:~/git/github/xtea$ echo 'проф. дохтор Чавдарлийска, дърта курва от ЦУ; доц. дохтор Бирен, СУ, вече пукнал; мангал-манаф (по библейски) Познатов, обикновен педераст' | ./xtea_encode d04a1f71 52fe5b05 10bced39 f434cbda | tee out
-------- ENCODE BEGIN stderr --------
-------- ENCODE END stderr --------
bdcc39e6 a4fb2bf7 
163f9d78 f0550a63 
795048be 5c26be25 
d4e5ddfc f441a918 
048ffdd9 8232267f 
ef009544 0b2c80dc 
47f0745b 2f0b1ef9 
38f307f5 f6fde332 
b095ac33 52c65ad0 
05446cdb 7c5fa109 
311ef8cd b0c7cf5a 
163f9d78 f0550a63 
795048be 5c26be25 
7aef9373 8efe412c 
65848a60 deb9af77 
f71229db e8d536e7 
5f88c103 f89ec44f 
f6de721a e5d4f91f 
281c4fb3 547d0d43 
64fcf6d4 7103fc31 
26983c89 17416261 
729b9a59 c13aec74 
cb759a1a 252e57c8 
616a2c24 9ddfad56 
aed97691 4369a958 
92cc4a31 3b223d05 
e8212261 717b0eec 
c0e95030 4c45bc06 
6ca1b9b0 708b39cf 
e32010a2 20359c47 
555ee466 7c245dcb 
nasko@midian:~/git/github/xtea$ ./xtea_decode d04a1f71 52fe5b05 10bced39 f434cbda < out
-------- DECODE BEGIN stderr --------
проф. дохтор Чавдарлийска, дърта курва от ЦУ; доц. дохтор Бирен, СУ, вече пукнал; мангал-манаф (по библейски) Познатов, обикновен педераст

-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/git/github/xtea$ 
