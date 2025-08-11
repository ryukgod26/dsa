#include<cstdlib>
#include <iostream>
using namespace std;

int board[3][3];
short currentPlayer;

const int X = 1, O = -1 , EMPTY =0;

void clearBoard(){

for(int i =0; i<3;i++)
	for(int j =0;j<3;j++)
		board[i][j] = EMPTY;

currentPlayer = X;

}

void putMark(int i ,int j){
if(board[i][j] != EMPTY){
cout<<(currentPlayer>0?'O':'X')<<" has already marked that position\n";
return ;
}
board[i][j] = currentPlayer;
currentPlayer = -currentPlayer;

}


bool isEmpty(){
for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
		if(board[i][j] == EMPTY) return false;

return true;
}

bool isWin(){
short win = -currentPlayer *3;
return (
	board [0][0] + board [0][1] + board [0][2] == win
	|| board [1][0] + board [1][1] + board [1][2] == win
	|| board [2][0] + board [2][1] + board [2][2] == win
	|| board [0][0] + board [1][0] + board [2][0] == win
	|| board [0][1] + board [1][1] + board [2][1] == win
	|| board [0][2] + board [1][2] + board [2][2] == win
	|| board [0][0] + board [1][1] + board [2][2] == win
	|| board [0][2] + board [1][1] + board [2][0] == win
		) ;

}	
char getWinner(){
currentPlayer=-currentPlayer;
return (currentPlayer?'X':'O');
}
bool isGameOver(){
if(isEmpty()){
cout<<"There is no Spaces left to place the mark; The game is a Tie";
return true;
}
else if(isWin()){
cout << getWinner() << " has won the Game\n";
return true;
}
return false;
}

void displayBoard(){
char display;
for(int i =0; i<3 ;i++){
for(int j =0;j<3;j++){
if(board[i][j] == X){
display = 'X';
}
else if(board[i][j] == O){
display = 'O';
}
else{
display=' ';
}
cout << display;

if (j<2) cout<<'|';
}
if (i<2) cout<<"\n+-+-+\n";
}
cout<<"Current Turn: "<< (currentPlayer >0?'X':'O') <<'\n';
}

int main(){
clearBoard();
game:	
	short x,y;
	displayBoard();
	cout<<"Enter the position to mark : ";
	cin >>x;
	cin >> y;
	putMark(x,y);
if(!(isGameOver()))
{
goto game;
}





return 0;




}
