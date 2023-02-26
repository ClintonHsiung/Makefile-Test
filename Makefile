all:
	make -C ./dir -f Makefile.dir
	make -f Makefile.main

clean:
	make -C ./dir -f Makefile.dir clean
	make -f Makefile.main clean
