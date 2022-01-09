#include <iostream>

using namespace std;

int main() {
  int i = 1;
  int n, sum = 0;

  cin >> n;

  while (n >= i * (i + 1) / 2){
    sum += i * (i + 1);
    i++;
  }

  if (n == (i - 1) * i / 2){
    cout << i - 1 << '\n' << sum;
  }
  else {
    int p = n - i * (i - 1) / 2;
    cout << p << '\n' << sum + p * (p + 1) / 2;
  }
}
