#include <iostream>
using namespace std;

int main() {
  int Output = 0;
  int x = 0;
  int Y = 0;
  int Z = 0;
  int W = 0;

  for (int i = 0; i <= 3; i++){
    cin >> Z>>W;
    
    Y = W -Z;
    x += Y;

    if(Output <= x){
      Output = x;
    }
  }
  cout << Output;
}
