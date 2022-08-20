#include<iostream>
using namespace std;
int main(){
    int i;
    cout << "Enter i value: ";
    cin >> i;
    if (i>10){
        if (i%2!=0) cout << "next step" << endl;
        if(i<50) cout << i << " is lower" << endl;
        else cout << i << " is greater" << endl;
    }
    else cout << i << " is lowest" << endl;
    return 0;
}
