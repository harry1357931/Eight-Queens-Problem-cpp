/** DumbEightQueenProblem -- Using 1D Array
 *  DumbEightQueen-1D.cpp
 *     
 *  Fall, 2011
 *
 *  Problem: EightQueens Problem
 *     The eight queens puzzle is the problem of placing eight chess queens on an 8×8 chessboard so 
 *     that no two queens attack each other. Thus, a solution requires that no two queens share the same row, 
 *	   column, or diagonal. The eight queens puzzle is an example of the more general n-queens problem of placing
 *	   n queens on an n×n chessboard, where solutions exist for all natural numbers n with the exception of 2 and 3.
 *  
 *  For More Description & Example of Problem:
 *     Check Link: http://en.wikipedia.org/wiki/Eight_queens_puzzle
 *      
 *  Input Format: 
 *      No Input is required, just run the program and it will display output arrangements of 8-queens.
 *
 *  OutPut Format:
 *      This program will out put all possible 8 queen arrangements on Chessboard, where no two queens attack  
 *      each other. i.e. this solution will output arrangements such that no two queens share the same row, column, 
 *      or diagonal. In the Output, 1 will represent queen and 0 non-queen.
 *
 * @Compiler version on which Program is Last Run before uploading to Github: Dev-C++ 5.4.1, Date: 1st July, 2013  
 * @author Gurpreet Singh
 */
//Dumb 8 queen solution for CS 211A  by Gurpreet Singh, Cuny ID: 23042113...lab by IVo Vigan

#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

bool ok(int board[8]){
    for(int c = 7; c > 0; c--){
        int r = 0;
        r=board[c];             // getting value for r....think
       
        for(int i = 1; i <= c; i++){
            if(board[c-i] == r)                        //checking parallel row
                return false;
            else if (board[c-i] == r-i)                   //left diagonal up
                return false;
            else if (board[c-i] == r+i)                   // left diagonal down
                return false;
        } // for loop

    } // for loop
        return true;
} // ok

void print(int board[8], int count){                //just make a 2D board
    cout << count << endl;
    int sol[8][8]={0};
        
        for(int j = 0; j < 8; j++){
            sol[board[j]][j]=1;
        } // for loop 
        
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
             cout<<sol[i][j]<< " ";               
             }                           
          cout<<endl;              
         }   
        system("pause");
        cout << endl;
} // print board

int main (){

    int board[8]={0};
    int count = 0;
    for(int i0 = 0; i0 < 8; i0++)
       for(int i1=0; i1 < 8; i1++)
          for(int i2 = 0; i2 < 8; i2++)
         for(int i3 = 0; i3 < 8; i3++)
            for(int i4 = 0; i4 < 8; i4++)
           for(int i5 = 0; i5 < 8; i5++)
              for(int i6 = 0; i6 < 8; i6++)
                 for(int i7 = 0; i7 < 8; i7++){
                            board[0]=i0;                    //i0, i1, i2 ...are rows
                            board[1]=i1;
                            board[2]=i2;
                            board[3]=i3;
                            board[4]=i4;
                            board[5]=i5;
                            board[6]=i6;
                            board[7]=i7;

                            if(ok(board))print(board, ++count);

                            board[0]=-1;                 //here is the problem
                            board[1]=-1;
                            board[2]=-1;
                            board[3]=-1;         
                            board[4]=-1; 
                            board[5]=-1;
                            board[6]=-1;
                            board[7]=-1;
 
                                }
    system("pause");
    return 0;
}
