#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int i,j;

bool check(string s1, string s2){
    int n=s1.length();
    int m=s2.length();
    bool dp[n+1][m+1];

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= m; j++) {
            dp[i][j] = false;
        }
    }
    dp[0][0] = true;

    for(i=0;i<n;i++){
        for(j=0;j<=m;j++){
            if (dp[i][j]) {
 
                if (j < m && (toupper(s1[i]) == s2[j]))
                    dp[i + 1][j + 1] = true;

                if (!isupper(s1[i]))
                    dp[i + 1][j] = true;
        }
    }
 }
 for (i = 0; i <= n; i++) {
        for (j = 0; j <= m; j++) {
           cout<<dp[i][j]<<"\t";
        }
        cout<<"\n";
    }
 return (dp[n][m]);
}

int main(){
    string s1, s2;
    cout<<"Enter the string s1:";
    cin>>s1;
    cout<<"Enter the string s2:";
    cin>>s2;

    if (check(s1,s2))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}