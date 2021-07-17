#!/bin/sh
#problem pick up the phone numner which match the format of 
#  (xxx) xxx-xxxx or   xxx-xxx-xxxx

egrep '^(\([0-9]{3}\)\s|[0-9]{3}-)[0-9]{3}-[0-9]{4}$' file.txt
