SeqList:SeqList.o Test.o #编译为release版本
		gcc $^ -o $@

%.o:%.c
		gcc -c $<

.PHONY:debug             #编译为debug版本
debug:
		del *.exe *.o
		gcc *.c -g -o $@

.PHONY:clean             #清除编译产生的文件
clean:
		del *.exe *.o
