#!/bin/sh

if [ "$#" -ne "1" ]; then
  echo "Usage : $0 <number>"
fi

mkdir "b$1"
cd "b$1"
touch "$1.cpp"
touch "$1.md"
