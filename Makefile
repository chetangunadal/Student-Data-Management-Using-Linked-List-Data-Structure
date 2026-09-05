CC=cc

target=student_main.o stud_add.o stud_del.o stud_prevfile.o stud_save.o stud_sort.o stud_mod.o stud_rev.o stud_show.o stud_alldel.o

exe: $(target)
	$(CC) $(target) -o student

student_main.o: student_main.c
	$(CC) -c student_main.c

stud_add.o: stud_add.c
	$(CC) -c stud_add.c

stud_del.o: stud_del.c
	$(CC) -c stud_del.c

stud_prevfile.o: stud_prevfile.c
	$(CC) -c stud_prevfile.c

stud_save.o: stud_save.c
	$(CC) -c stud_save.c

stud_sort.o: stud_sort.c
	$(CC) -c stud_sort.c

stud_mod.o: stud_mod.c
	$(CC) -c stud_mod.c

stud_rev.o: stud_rev.c
	$(CC) -c stud_rev.c

stud_show.o: stud_show.c
	$(CC) -c stud_show.c

stud_alldel.o: stud_alldel.c
	$(CC) -c stud_alldel.c

clear:
	@echo "Clearing..."
	@rm -r *.o
