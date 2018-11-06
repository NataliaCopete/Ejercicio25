sample.pdf: sample.dat
	python sample.py
sample.dat:
	c++ -o sample sample.c
	./sample 1000 3 0.5 >sample.dat
