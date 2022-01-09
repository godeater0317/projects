#include <iostream>
using namespace std;
int array[100000] = {0};

int main() {
  int h = 0;
  int N = 0;
  int cnt = 0;
  cin >> N;

  for (int i = 1; i <= N; i++){
    cin >> h;
    array[i-1] = h;
  }

    int comp = array[N-1];

  for (int j = N-1; j >= 0; j--){

    if (array[j] > comp){
      cnt++;
      comp = array[j];
    }
  }

  cout << cnt + 1;
}
