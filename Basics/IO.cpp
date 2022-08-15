#include<iostream>
using namespace std;
int main(void){
    int i,j;
    cout << "Enter i and j values: " << endl;
    cin >> i >>j;
    if(i>j) cout << i << " is greater than " << j << endl;
    else cout << i << " is less than " << j <<endl;
    return 0;
}