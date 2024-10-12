//
//  Introduction to C++
//
#include <iostream>
#include <cmath>  
using namespace std;

void PB1() {

    int n = 0;
    int n2 = 1;

    // Prompt the user for input
    cout << "Enter an integer number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        n2 = n2 * i ;

    };
    cout << "factoriel  " << n << " = " << n2;

}
void PB2() {
    float x;
    int n;
    float result = 1;  

    cout << "Enter a positive number: ";
    cin >> x;

    cout << "Enter an integer number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= x;   
    }

    cout << x << "^" << n << " = " << result << endl;  
}

int sum(int n) {

    if (n==1){
        return 1;
    }
    else{
        return n + sum(n - 1) ; 
    }

}

void PB3() {
    
    int n;
    
    cout << "Enter an integer number: ";
    cin >> n;


    cout << "The sum of the numbers between 1 and " << n << " is : " << sum(n) << endl;  
}


int main(int argc, const char * argv[]) {

    void (*pbFunctions[])() = { PB1, PB2, PB3 };  // Add all your PB functions here

    int choice;
    cout << "Choose the problem number \n";
    cin >> choice;
    
    cout << "This is the problem " << choice << "solution !\n";
    pbFunctions[choice - 1]();
    cout << "\n";

    return 0; 
}
