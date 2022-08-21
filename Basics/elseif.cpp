#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    cout << "Enter values of i,j,k: ";
    cin >> i >>j >> k;
    if(i>j){
        if(i>k) cout << i <<" is larger" <<endl;
        //else cout << k << " is larger" << endl;
    }
    else if (j>k) cout <<j <<" is larger" <<endl;
    else cout << k << " is larger" << endl;
    return 0;
}