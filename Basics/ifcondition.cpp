#include<iostream>
using namespace std;
int main(){
    int i,j;
    cout <<"Enter i & j values:" <<endl;
    cin >> i >> j;
    if(i%j==i/j) cout <<"Weird" <<endl;
    else cout <<"Not Weird" <<endl;
    cout << i%j << " " << i/j <<endl;
    return 0;
} 