#!/bin/sh

(
	for i in `seq 0 15`; do
		dd if=/dev/random bs=1 count=8 2>/dev/null | \
			hd | sed -e 's/^[0-9a-fA-F]*//g;s/|.*$//g;s/ //g;s/......../& /g;/^$/d'
		sleep 1
		dd if=/dev/random bs=1 count=16 2>/dev/null | \
			hd | sed -e 's/^[0-9a-fA-F]*//g;s/|.*$//g;s/ //g;s/......../& /g;/^$/d'
		sleep 1
	done
) | awk '
BEGIN {
	n = 0;
}

{
	if (n % 2) printf("%s %s %s %s\n", $1, $2, $3, $4);
	else printf("%d %s %s ", n / 2, $1, $2);
	n++;
}'
