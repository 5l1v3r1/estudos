#!/bin/bash

if [ "$1" == "" ]; then
    echo "$0 dominio.com.br"
else
    wget $1 -O output -q
    cat output | grep "href" | cut -d "/" -f 3 | grep "\." | grep -v "<li" | cut -d '"' -f 1  | sort -u 
    rm output
fi
