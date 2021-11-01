#!bin/bash

for module in module0*; do
	cd $module
	for ex in ex0*; do
		make --no-print-directory -C $ex re
	done
	cd ..
done
