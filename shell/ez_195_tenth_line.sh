#!/bin/sh
#problem : print out the 10th line of the file.txt

#awk version
#awk '(NR ==10 ){print }' file.txt


#sed version
sed -n '10p' file.txt
