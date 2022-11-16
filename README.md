nasko@midian:~/git/github/xtea$ ./keygen.sh > keys
nasko@midian:~/git/github/xtea$ grep -e '^[56] ' keys
5 9cc0f7e5 df08ba1e 06b640b6 26c3b1e8 1fc0e045 4af626c3
6 b11fe186 9cad6b8a e13d4be8 5f56cdfa ff0444dc f53a78ab
nasko@midian:~/git/github/xtea$ echo 'проф. дохтор Чавдарлийска, дърта шаврантия; доц. дохтор Бирен, вече дестилиран; мангал-манаф (по библейски) многоПознатов, обикновен манаф' | ./xtea_encode 9cc0f7e5 df08ba1e 06b640b6 26c3b1e8 1fc0e045 4af626c3 | tee out
-------- ENCODE BEGIN stderr --------
-------- ENCODE END stderr --------
61c46bc6 c3768edc 
bc786451 39b2ce00 
5b30a033 1d3e9177 
a92f1f38 32855b7e 
f091c0fe 6782fff5 
9cb15dcf 6167b41e 
23a339c3 ebda4d1f 
9bf1a386 a7efeb09 
56b738a4 f4523bde 
8ee4d318 10bb23e0 
0b1d1427 c1717bd6 
6595f68a cbaa0c10 
faebf32c 7c1d5d71 
9625137d 7a1c2fe0 
c239b012 55833be6 
8b4f50c2 9f68203c 
428a4ca9 8bbf115f 
c4b564c6 4fbc19f0 
ec1d01c9 f490bf10 
93e8e258 e865688d 
ac0c41f3 402fdd1c 
225955fc e0da86c4 
6bf89c09 89dbe195 
0709f171 a0164fcd 
c1b3fa5d 4f4511f9 
0bb23487 9da6bd1f 
2a169196 a869078e 
80f8b6c7 94a62aa4 
0cdf9bd1 d41ebb41 
6400c197 51d99402 
8090e197 19bb1ea9 
a7bf927c 46cc39dc 
nasko@midian:~/git/github/xtea$ ./xtea_decode 9cc0f7e5 df08ba1e 06b640b6 26c3b1e8 1fc0e045 4af626c3 < out
-------- DECODE BEGIN stderr --------
проф. дохтор Чавдарлийска, дърта шаврантия; доц. дохтор Бирен, вече дестилиран; мангал-манаф (по библейски) многоПознатов, обикновен манаф

-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/git/github/xtea$ base64 < /bin/ls | ./xtea_encode b11fe186 9cad6b8a e13d4be8 5f56cdfa ff0444dc f53a78ab | ./xtea_decode b11fe186 9cad6b8a e13d4be8 5f56cdfa ff0444dc f53a78ab | base64 -di > ls
-------- DECODE BEGIN stderr --------
-------- ENCODE BEGIN stderr --------
-------- ENCODE END stderr --------

-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/git/github/xtea$ md5sum /bin/ls
586256cbd58140ec8c3b2c910cf80c27  /bin/ls
nasko@midian:~/git/github/xtea$ md5sum ./ls
586256cbd58140ec8c3b2c910cf80c27  ./ls
nasko@midian:~/git/github/xtea$ rm ./ls
nasko@midian:~/git/github/xtea$ 
