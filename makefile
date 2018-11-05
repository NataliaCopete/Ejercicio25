sample.pdf: sample.dat
	python sample.py
sample.dat:
	g++ -std=c++11 -o sample sample.c
	./sample 1000 3 0.5 >sample.dat
