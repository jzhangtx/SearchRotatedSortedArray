SearchRotatedSortedArray: SearchRotatedSortedArray.o
	g++ -g -o SearchRotatedSortedArray.exe SearchRotatedSortedArray.o -pthread    

SearchRotatedSortedArray.o: SearchRotatedSortedArray/SearchRotatedSortedArray.cpp
	g++ -g  -c -pthread SearchRotatedSortedArray/SearchRotatedSortedArray.cpp
