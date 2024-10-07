make clean
make

timeout 2s $(make run <./test1.txt) >./output.txt

diff output.txt soltest1.txt --color

rm ./output.txt
