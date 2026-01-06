#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    // int n;
    // cin >> n;
    // int arr[5];
    // for (int i =0; i < n; i++){
    //     cin >> arr[i];
    // }
    // int sum =0;
    // for( int i =0 ; i< n; i++){
    //     sum += arr[i];
    // }
    // cout<< sum << "\n";
    int arr[5];

    cout << sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    for( int i =0; i< v.size(); i++){
        cout << v[i];
    }
    for (auto &i : v){
        cout<< i;
    }








    return 0;
}