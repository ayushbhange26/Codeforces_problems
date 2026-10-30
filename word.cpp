
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string s ;
    cin >> s;

    int lower = 0 ;
    int upper = 0 ;
    
    
    // cout << s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
        else if (s[i]>='a' && s[i]<='z'){
            lower++;
        }
    }
    // cout << upper << lower;
    if(lower==upper || lower>upper){
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] =s[i]+32;
            }
        }
    }

    else{
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i] =s[i]-32;
            }
        }
        
    }
    cout << s;
   

}