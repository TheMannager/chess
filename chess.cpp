#include<iostream>

using namespace std;
// declare fucntions
int displayBoard();
int setPositions();
//glabal variables
string board[8][8];
// main function -
int main()
{
    // prints hello world
    for( int x = 0; x < 8; x++){
      for (int y = 0; y < 8; y++) {
        board[x][y]=" ";
      }
    }
    displayBoard();
    return 0;
}

int displayBoard(){
  std::cout << " 12345678" << '\n';
  for( int x = 0; x < 8; x++){
    cout << x+1;
    for (int y = 0; y < 8; y++) {
      //print item from that spot
      cout<<board[x][y];
    }
    cout<< '\n';

  }
  return 0;
}

int setPositions(int newX, int newY, bool black){
  if(black){
    board[newX][newY] = "B";
  }
  else{
    board[newX][newY] = "W";
  }
  return 0;
}
