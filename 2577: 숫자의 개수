#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int A, B, C = 0;
    int cnt[10] = {0};
        
    cin >> A >> B >> C;
    int mult = A * B * C;
        
    while(mult >= 1){
        int d = mult % 10;
        cnt[d]++;
        mult = mult / 10;
    }
    
    for(int i = 0; i <= 9; i++){
        cout << cnt[i] << '\n';
    }
}
