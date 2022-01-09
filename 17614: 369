#include <iostream>
using namespace std;

int main()
{
    int N, clap = 0;

    cin >> N;
    
    for(int i = 0; i <= N; i++){
        int num = i;
        while(num >= 1){
            int d = num % 10;
            if(d == 3 || d == 6 || d == 9){
                clap++;
            }
            num = num / 10;
        }
    }
    cout << clap;
    return 0;
}
