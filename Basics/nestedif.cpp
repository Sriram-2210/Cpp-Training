#include<iostream>
using namespace std;
int main(){
    int i;
    cout << "Enter i value: ";
    cin >> i;
    if (i>10){
        if (i==50) cout << "equal" << endl;
        if(i<50) cout << i << " is lower" << endl;
        else cout << i << " is greater" << endl;
    }
    else cout << i << " is lowest" << endl;
    return 0;
}

/* 
In nested if statements, irrespective of first if condition the nested block executes.
for above example, the condition if(i==50); whether it's true or false, the below 
nested if block executes.
*/