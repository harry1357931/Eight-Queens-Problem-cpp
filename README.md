Eight-Queens-Problem-cpp
========================

This repository contains many independent implementations of Eight Queens Problem.

Algorithm:
==========
The program finds solutions by starting with a queen in the top left corner of the chess board. 
It then places a queen in the second column and moves it until it finds a place where it cannot be 
hit by the queen in the first column. It then places a queen in the third column and moves it until it cannot 
be hit by either of the first two queens. Then it continues this process with the remaining columns. If there is 
no place for a queen in the current column the program goes back to the preceding column and moves the queen in 
that column. If the queen there is at the end of the column it removes that queen as well and goes to the preceding 
column. If the current column is the last column and a safe place has been found for the last queen, then a 
solution of the puzzle has been found. If the current column is the first column and its queen is being moved off 
the board then all possible configurations have been examined, all solutions have been found, and the algorithm 
terminates.
This algorithm is taken from Wikipedia just to put into ReadMe file in GitHub

What to do before running the program:
======================================

Just Open Individual .cpp files, and read comments on top before running the program.

