//
//  Introduction to C++
//
#include <iostream>
#include <cmath>  
using namespace std;

int PB1() {

    int n = 0;
    int n2 = 1;

    // Prompt the user for input
    cout << "Enter an integer number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        n2 = n2 * i ;

    };
    cout << "factoriel  " << n << " = " << n2;
    return n2;
}



int main(int argc, const char * argv[]) {

    int (*pbFunctions[])() = { PB1 };  // Add all your PB functions here

    int choice;
    cout << "Choose the problem number \n";
    cin >> choice;
    
    cout << "This is the problem " << choice << "solution !\n";
    pbFunctions[choice - 1]();
    cout << "\n";

    return 0; 
}
