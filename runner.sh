#!/bin/bash

for DIR in src doc tests examples 
do
	touch "$DIR/README.md"
	echo "# $DIR" >> "$DIR/README.md"

done 
