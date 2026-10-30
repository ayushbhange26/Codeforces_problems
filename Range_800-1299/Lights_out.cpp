#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> c = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };

    vector<vector<int>> input(3, vector<int>(3));

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> input[i][j];

            if(input[i][j] % 2){
                c[i][j] = 1-c[i][j];

                if(i>0) c[i-1][j] = 1-c[i-1][j];
                if(i<2) c[i+1][j] = 1-c[i+1][j];
                if(j>0) c[i][j-1] = 1-c[i][j-1];
                if(j<2) c[i][j+1] = 1-c[i][j+1];
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << c[i][j];
        }
        cout << endl;
    }

    return 0;
}