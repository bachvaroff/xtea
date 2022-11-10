nasko@midian:~/git/github/xtea$ ./keygen.sh > keys
nasko@midian:~/git/github/xtea$ grep '^5 ' keys
5 10771b1e 21375d57 1257ed6d 2aaa8cad 
nasko@midian:~/git/github/xtea$ echo 'проф. дохтор Чавдарлийска, дърта курва от ЦУ; доц. дохтор Бирен, ЦУ, вече пукнал; мангал-манаф (по библейски) Познатов, обикновен педераст' | ./xtea_encode 10771b1e 21375d57 1257ed6d 2aaa8cad | tee out
-------- ENCODE BEGIN stderr --------
-------- ENCODE END stderr --------
6d024ac7 6a55f330 
76c342f0 dd333ace 
ff1dc7ac 41c918ed 
04867c82 274ca49c 
b02ec83f 4601c3db 
451e6d76 9db46ef6 
a385f023 cf5b1f67 
f8a04f96 ee7267e9 
f28dfc58 43f03411 
721e88fb bc9623ec 
1fd07fb5 2ea7cbed 
76c342f0 dd333ace 
ff1dc7ac 41c918ed 
45e68c64 095b0810 
d14ae02a 50b786b7 
1d7c95b5 b785ee98 
7008071f f8645609 
ceb75767 ca929f4e 
36521c38 c1d5e38f 
a9aba5fc 5a43336b 
0364a06c bf1b176f 
eea45e6a 4da4dc13 
f802f248 28acb43e 
8c7cc864 9e65f659 
f913bd60 3090c6c9 
1bede7ec b3860a16 
6f5a05a4 11a78aa8 
57537f3a 3a31c60c 
81d40354 895b500d 
3d7db90c 503d7a80 
22da99ab dbedf54e 
nasko@midian:~/git/github/xtea$ ./xtea_decode 10771b1e 21375d57 1257ed6d 2aaa8cad < out
-------- DECODE BEGIN stderr --------
проф. дохтор Чавдарлийска, дърта курва от ЦУ; доц. дохтор Бирен, ЦУ, вече пукнал; мангал-манаф (по библейски) Познатов, обикновен педераст

-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/git/github/xtea$ 
