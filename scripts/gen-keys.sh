#!/bin/bash
rm -rf tmp

echo 'you will be prompted for a string'

echo 'example  this is the string to use as key'

read -p "What is the string you wish to use as your key? " key
echo $key
echo $key > testkey

echo 'you will be prompted for where to save the string'
echo 'example testkeyxxyyzz where xx is the month yy is the day and zz is the year'
read -p "What is the filename you wish to use to save your key? " myfile

mkdir tmp

cd tmp
echo $key > $myfile
cat $myfile
sha256sum $myfile > 64bitkey
shasum $myfile > 40bitkey
