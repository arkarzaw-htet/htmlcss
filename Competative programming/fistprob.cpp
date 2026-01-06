#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >>t;
    while((t--)> 0){
        int a,b,c,d;
        cin >> a>>b>>c>>d;
        if(a==b && b== c && c== d && d==a){
            cout << "Yes" << "\n";
        }else{
            cout << "No" << "\n";
        }

    }
}