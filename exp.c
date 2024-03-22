7)mkdir cs111
cd cs111
git init
repeat 4 times
nano abc.txt
git add .
git commit -m”file’
git log
git tag v1.0 id
git checkout c1.0
nano abc.txt
git checkout -b blde c1.0
nano abc.txt
git add .
git commit -m”blde file”
git checkout master
nano abc.txt
8)cd cs111
Git branch gc1
Git branch gc2
Repeat 4 times
Nano demo.c
Git add .
Git commit -m”file”
Git log
Git checkout gc2
Git cherry-pick s^ d
Nano demo.c
Git add .
Git cherry-pick –continue
Nano demo.c
Git add .
Git commit -m”gc2 file”
Git checkout gc2

