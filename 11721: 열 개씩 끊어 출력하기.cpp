#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t = 0;
    int k = 0;
    string s;

    cin >> s;
    
    k= s.size();
    t = k / 10;
    
    for(int j = 0; j < t; j++){
        for(int m = 10 * j; m < 10 * (j + 1); m++){
            cout << s[m];
        }
        cout << '\n';
    }
    
    for(int m = 10 * t; m < k; m++){
        cout << s[m];
    }
                
    return 0;
}
