/** EightQueenProblem -- Using backtracking, and goto
 *  EightQueen.cpp
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

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int b[8][8]={0};
    b[0][0]=1;
    int counter=0;
    int i,j,r;
    int c=0;
NC: c++;                    // NC: Next Column
    if(c==8)
    goto print;
    r=-1;
    NR: r++;
if(r==8) goto backTrack;

    for(i=0;i<c;i++)
        if(b[r][i]==1) goto NR;                // NR: Next Row
    for(i=1;r-i>=0,c-i>=0;i++)
        if(b[r-i][c-i]==1) goto NR;
    for(i=1;r+i<=7,c-i>=0;i++)
        if(b[r+i][c-i]==1) goto NR;

    b[r][c]=1;
    goto NC;
backTrack:c--;
    if(c==-1) return 0;

    r=0;
    while (b[r][c]!=1)
        r++;

    b[r][c]=0;
    goto NR;

print:
    counter++;
    cout<<counter;
    cout<<endl;
    for(i=0;i<8;i++)
     {
        for(j=0;j<8;j++)
          cout<<b[i][j];
          cout<<endl;
     }
    cout <<"Press Enter to see the next Eight queen arrangement"<<endl;
    system("pause");
    goto backTrack;
    return 0;
}
