#!/bin/sh

(
	for i in `seq 0 15`; do
		dd if=/dev/random bs=1 count=16 2>/dev/null | \
			hd | sed -e 's/^[0-9a-fA-F]*//g;s/|.*$//g;s/ //g;s/......../& /g;/^$/d'
		sleep 1
	done
) | awk 'BEGIN { n = 0; } { printf("%d ", n); print; n++; }'
