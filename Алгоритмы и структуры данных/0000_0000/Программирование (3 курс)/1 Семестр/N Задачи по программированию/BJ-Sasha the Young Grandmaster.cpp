#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int x,y,R,King,Knight,Bishop,Rook,Queen;
    cin>>R;
    cin>>x>>y;
    King=0;
    Knight=0;
    Bishop=0;
    Rook=0;
    Queen=0;
    if(R==1)
    {
        King=0;
        Knight=0;
        Bishop=0;
        Rook=0;
        Queen=0; 
    }
    if(R==2)
    {
        King=3;
        Knight=0;
        Bishop=1;
        Rook=2;
        Queen=3;
    }
    if(R>2)
    {
        if(x+1<=R && x+1>=1)King=King+1;
        if(x-1<=R && x-1>=1)King=King+1;
        if(y+1<=R && y+1>=1)King=King+1;
        if(y-1<=R && y-1>=1)King=King+1;
        if(x+1<=R && y+1<=R && x+1>=1 && y+1>=1)King=King+1;
        if(x-1<=R && y+1<=R && x-1>=1 && y+1>=1)King=King+1;
        if(x+1<=R && y-1<=R && x+1>=1 && y-1>=1)King=King+1;
        if(x-1<=R && y-1<=R && x-1>=1 && y-1>=1)King=King+1;
        if(x+2<=R && y+1<=R && x+2>=1 && y+1>=1)Knight=Knight+1;
        if(x+1<=R && y+2<=R && x+1>=1 && y+2>=1)Knight=Knight+1;
        if(x-1<=R && y+2<=R && x-1>=1 && y+2>=1)Knight=Knight+1;
        if(x-2<=R && y+1<=R && x-2>=1 && y+1>=1)Knight=Knight+1;
        if(x+2<=R && y-1<=R && x+2>=1 && y-1>=1)Knight=Knight+1;
        if(x+1<=R && y-2<=R && x+1>=1 && y-2>=1)Knight=Knight+1;
        if(x-1<=R && y-2<=R && x-1>=1 && y-2>=1)Knight=Knight+1;
        if(x-2<=R && y-1<=R && x-2>=1 && y-1>=1)Knight=Knight+1;
        Bishop=Bishop+fmin(R-x,R-y)+fmin(x-1,y-1)+fmin(x-1,R-y)+fmin(R-x,y-1);
        Rook=2*R-2;
        Queen=Bishop+Rook;
    }
    cout<<"King: "<<King<<endl;
    cout<<"Knight: "<<Knight<<endl;
    cout<<"Bishop: "<<Bishop<<endl;
    cout<<"Rook: "<<Rook<<endl;
    cout<<"Queen: "<<Queen<<endl;
    
    return 0;
}

/*
Little Sasha is quite determined to learn to play chess. First of all he of course learned how each chess piece could move (except for the pawn as its moving strategy turned out so complicated that Sasha failed to remember them). Then his older brother Oleg came in to check Sasha’s progress. He chose some square on the chessboard and started putting pieces on the square, one by one, asking his little brother: “How many squares are now under attack?”

That was rather stressful for Sasha and he asked you to help him.

The chessboard is a field of n ? n square cells. The rook can move any number of cells, but only horizontally or vertically. The bishop can move any number of cells, but only diagonally. The queen can move any number of cells horizontally, vertically or diagonally. The king can move one cell horizontally, vertically or diagonally and the knight makes “L” shaped moves, that is, it moves either one cell horizontally and two cells vertically or two cells horizontally and one cell vertically.
*/