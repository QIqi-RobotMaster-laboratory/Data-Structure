SeqList:SeqList.o Test.o
		gcc $^ -o $@

%.o:%.c
		gcc -c $<

.PHONY:debug
debug:
		del *.exe *.o
		gcc *.c -g

.PHONY:clean
clean:
		del *.exe *.o
