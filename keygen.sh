#!/bin/sh

for i in `seq 0 16`; do
	dd if=/dev/random bs=1 count=16 2>/dev/null | hd
done

