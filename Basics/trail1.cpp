#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 0; i<n; i++) cout << "The number is " << i <<"\n";
    return 0;
}

// here in c++, int main(void) and int main() won't make any difference as both are same.
// In c, however, int main(void) is the recommended practice as it can take any no of arguments 