#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s[5];
    int max1 = 0;
            
    for(int m = 0; m <= 4; m++){
        cin >> s[m];
            
        if(max1 <= s[m].size()){
            max1 = s[m].size();
        }
        
    }

    for(int j = 0; j < max1; j++){
        for(int m = 0; m <= 4; m++){
            if(s[m].size() > j){
                cout << s[m][j];
            }
        }
    }

    return 0;
}
