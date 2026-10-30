
#include <bits/stdc++.h>
using namespace std;
int main()
{
//   Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--»

    string s;
    cin >> s;
    int i=0;
    string ans="";
    while(s[i]!='\0'){
        if(s[i]=='.'){
            ans = ans+'0';
            i++;
        }
        else if(s[i]=='-' ){
            if(s[i+1]=='.'){
                ans+='1';
            }
            else{
                ans+='2';
            }
            i = i+2;
        }
    }
    cout << ans;
}