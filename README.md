Search Rotated Sorted Array


You are given a list of unique integers which are sorted but rotated at some pivot. You are also given a target value and you have to find its index in the list. If it is not present in the list, return -1.

Example:
List: [4, 5, 6, 7, 1, 2, 3]
Target value: 6
Resultant index: 2

Testing
Input Format
The first line contains 'T', denoting the number of test cases.

Each test contains 3 lines:

a number 'n', denoting the number of elements.
n space-separated numbers denoting the array elements.
the target value.
Output Format
T lines, each containing a number denoting the index of the target value. -1 if the target value is not present.

Sample Input
4
7
4 5 6 7 0 1 2
4
4
3 4 1 2
5
5
5 1 2 3 4
2
4
5 6 3 4
4
Expected Output
0
-1
2
3