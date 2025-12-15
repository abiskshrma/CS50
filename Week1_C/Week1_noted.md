# Libraries are set of codes that someone else wrote for you.
# if you do not include headers(Libraries) Like stdio.h you get error like : warning: incompatible implicit declaration of built-in function 'printf'

# Libraries to refer: https://manual.cs50.io/#stdio.h

$ ls
hello*  hello.c
$ rm hello
rm: remove regular file 'hello'? y
$ mkdir hello
$ mv hello.c
mv: missing destination file operand after 'hello.c'
Try 'mv --help' for more information.
$ mv hello.c hello/
$ ls
hello/
$ /hello
bash: /hello: No such file or directory
$ cd hello
hello/ $ ls
hello.c
hello/ $ mv hello.c old.c
hello/ $ mv old.c hello.c
hello/ $ cp hello.c backup.c
hello/ $ ^C
hello/ $ 