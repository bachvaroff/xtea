nasko@midian:~/var/git/xtea$ ./keygen.sh
0 6832bc73 dd75fafa e2a235c0 4acea96f 
1 ee0a5215 2e0b127f d7663436 a2a19669 
2 d7865799 74bc6e12 81b37831 2538e569 
3 232902d9 8a79b529 b2c71e3e cfe9e99b 
4 2eedfb34 c018059b 83e8433c 4edd295d 
5 e3ee703e aeea1e82 58e90177 e6db2241 
6 c9b0f24f 82205acf 50bd9a21 c6825dde 
7 681b2087 17d92da3 37f29c26 e167af3b 
8 3933adfa 271c1c97 920e25f6 260d3f83 
9 f02b05ce f68b60ec ae054d00 20722795 
10 425bdc5c b6aa9092 cd3d86a8 118910b7 
11 29ddc308 55593789 4b451117 758068b9 
12 33bb650a b40e78dd e14b024e 0a8620cc 
13 d08a47ac 8016602a 996fba2d f84a7b68 
14 3de1470e bd395bec 49847671 b126772e 
15 227414e6 56fae512 5156c12b b241b4b7 
nasko@midian:~/var/git/xtea$ ./xtea_encode 6832bc73 dd75fafa e2a235c0 4acea96f 'проф. дохтор Чавдарова, дърта курва от СУ; доц. дохтор Биров, СУ, вече пукнал; циганин-манаф Познаков, обикновен педераст'
-------- ENCODE BEGIN stderr --------
f3016a68
011c77bb
75883bf1
13031c93
0858a029
27d2701e
aa19c241
690f1dae
634d5d86
9f6ac2d8
39370232
9d7e559f
1a400b7b
7d718c4d
3e8bde85
4d171dd2
1433f085
8a26a355
7ca152b7
e31ea7e5
938784d2
b532fdb6
d07ff51e
5c7f6f1e
1cbf370c
8d598275
90288c35
75154207
e6fae70b
7dff0dd2
e56cfb2e
a93d879c
9d5d13dc
9ee85bb2
39af033b
21f8f84b
9da4521e
311d54ad
51fd8cf8
4c952cd2
128e80d9
33215c71
0ab75140
f7306c5b
0585f4fa
50480223
a2a496f5
9b4a9a23
4d1e139a
80425fa6
a143ddbf
534ed1a6
e4e136cf
e3fe75a6
c01eb5f1
d9e7fb21
-------- ENCODE END stderr --------
nasko@midian:~/var/git/xtea$ ./xtea_decode 6832bc73 dd75fafa e2a235c0 4acea96f f3016a68 011c77bb 75883bf1 13031c93 0858a029 27d2701e aa19c241 690f1dae 634d5d86 9f6ac2d8 39370232 9d7e559f 1a400b7b 7d718c4d 3e8bde85 4d171dd2 1433f085 8a26a355 7ca152b7 e31ea7e5 938784d2 b532fdb6 d07ff51e 5c7f6f1e 1cbf370c 8d598275 90288c35 75154207 e6fae70b 7dff0dd2 e56cfb2e a93d879c 9d5d13dc 9ee85bb2 39af033b 21f8f84b 9da4521e 311d54ad 51fd8cf8 4c952cd2 128e80d9 33215c71 0ab75140 f7306c5b 0585f4fa 50480223 a2a496f5 9b4a9a23 4d1e139a 80425fa6 a143ddbf 534ed1a6 e4e136cf e3fe75a6 c01eb5f1 d9e7fb21
-------- DECODE BEGIN stderr --------
проф. дохтор Чавдарова, дърта курва от СУ; доц. дохтор Биров, СУ, вече пукнал; циганин-манаф Познаков, обикновен педераст
-------- NEW LINE stderr --------
-------- DECODE END stderr --------
nasko@midian:~/var/git/xtea$ 
