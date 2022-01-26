.PHONY: bundle clean

bundle: main.c mod1.c mod1.h mod2.c mod2.h
	tar zcf source.tgz main.c mod1.c mod1.h mod2.c mod2.h
clean:
	rm -f *.o
	rm -rf source.tgz
