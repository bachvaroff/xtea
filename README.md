nasko@midian:~/git/github/xtea$ ./keygen.sh 
0 7ff23365 f4d410f9 12f85146 fb0a559e 
1 672c6df5 882a4957 2918ae83 eba2dc19 
2 44de2502 a796da8f 7b4d9d2a 03683ef4 
3 6d1f6b93 5e0bae3e 69477d70 a5e6eb73 
4 77907d2c dae11bc4 9fcff7be d0eb0876 
5 cd288945 3d5ef0a1 34d8972e 379e1bf8 
6 9eca2e26 c06761b6 020da9c9 a18cadd5 
7 081e1b5e 790a101d cc896da1 a9470ac9 
8 266245d6 8a279f41 5cc851a0 7e71a1c7 
9 8094a46a a0f72509 e96a6c5c 9999747b 
10 2efd277c 3b8795c0 3bd307e8 6b55f8e2 
11 f8a95c01 e851c943 7ef7cbb4 81f24e31 
12 4d048e60 ca8b5743 1c3eece3 73228a7b 
13 d64e573c c762cd82 2cb4a336 510d3c91 
14 8801b4f3 ed84fe49 211a2be8 71cdb276 
15 c5f3fd14 05238dc9 eca36756 4104139f 
nasko@midian:~/git/github/xtea$ echo 'проф. дохтор Чавдарлийска, дърта курва от ЦУ; доц. дохтор Бирен, СУ, вече пукнал; мангал-манаф (по библейски) Познатов, обикновен педераст' | ./xtea_encode 7ff23365 f4d410f9 12f85146 fb0a559e | tee out
-------- ENCODE BEGIN stderr --------
-------- ENCODE END stderr --------
49db1971
353b1443
9d263a10
92bd91c0
94738f95
ad08955a
e6aacf44
45ddb7e8
edfa0cb9
1bf73553
d18ebe52
be672eb0
c79a03a0
5e6b79ab
700dca8c
9cf37963
cc840241
f0da2f85
b36349ab
3fa15b0b
53749e52
5ea4080e
9d263a10
92bd91c0
94738f95
ad08955a
f365ecff
b6f4cd91
f7b1a89b
d1df9992
c0fde1fd
8d2d205f
ec9f38f2
f997c585
a1209b22
e828037e
5d196364
edef17a7
408e235f
46c1892f
7ad03f99
f2625fb8
a8762e33
d30e580c
370fe204
ed6365be
7f4c21ed
961126fd
8f3eba1d
0d159cf6
4b249f01
32cd4bcf
27fa86e3
7675eb5c
d2c2544f
1c4f2ff1
16cf33e3
dda59b6a
94cc5c8e
4fa1925d
3c4c95dd
2da6d516
nasko@midian:~/git/github/xtea$ ./xtea_decode 7ff23365 f4d410f9 12f85146 fb0a559e < out
-------- DECODE BEGIN stderr --------
проф. дохтор Чавдарлийска, дърта курва от ЦУ; доц. дохтор Бирен, СУ, вече пукнал; мангал-манаф (по библейски) Познатов, обикновен педераст

-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/git/github/xtea$ 
