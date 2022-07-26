all = add-nbo

main: $(all)
	./$(all) thousand.bin five-hundred.bin

$(all) : $(all).o
	gcc -o $(all) $(all).o

$(all).o : $(all).c
	gcc -c $(all).c

clean:
	rm -rf $(all)
	rm -rf $(all).o
