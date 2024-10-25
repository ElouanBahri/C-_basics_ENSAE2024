//
//  Introduction to C++
//
//  Created by ElouanBahri on 10/10/2024.
//
#include <cmath>
#include <iostream>
using namespace std;

//---------------------------------------------------------------------------------------------------------

int sum(int (*funct)(int), int n) {
  int total = 0;
  for (int i = 0; i < n + 1; i++) {
    total = total + funct(i);
  }
  return total;
}

int g(int x) { return x; }

int h(int x) { return x * x; }

void PB1() {

  int n;

  // Prompt the user for input
  cout << "Enter an integer ";
  cin >> n;

  cout << sum(g, n);
  cout << endl;
  cout << sum(h, n);
}

//---------------------------------------------------------------------------------------------------------

int &f(int &a) {
  a = a + 5;
  return a;
}

void PB2() {

  int a = 5;
  for (int i = 0; i < 2; i++) {
    f(a)++;
  }
  cout << f(a);
}
// the result is 22

// if we replace int & f(int & a) by int f(int & a) : error: expression is not
// assignable because f(a)++;

// if we replace int & f(int & a) by int &f(int  a) : we have 10

// if we replace int & f(int & a) by int f(int a) : error: expression is not
// assignable  f(a)++;

//---------------------------------------------------------------------------------------------------------

void PB3() {

  int a[5]; // Declaration of the array
  int *p =
      a; // Declaration of a pointer pointing to the first element of the array
  for (int i = 0; i < 5; i++) {
    cout << "Enter an integer: ";
    cin >> *(p + i); // this is equivalent to a[i];
    cout << "Your interger!: ";
    cout << *(p + i) << "\n";
  }
}

//---------------------------------------------------------------------------------------------------------

void swap_references(float& a, float& b) {

  float c = b;
  b = a;
  a = c;

}

void PB4() {

  float num1 = 8.8, num2 = 10.2;

  cout << "Before the swap function we have num 1 =  " << num1
       << " and num 2 =  " << num2 << "\n";

  swap_references(num1, num2);

  cout << "After the swap function we have num 1 =  " << num1
       << " and num 2 =  " << num2;
}

//---------------------------------------------------------------------------------------------------------

double sumDoubles(double* arr, int length) {

    double total = 0.0;

    for (int i = 0; i<length; i++){
        total += arr[i];
    }

    return total;

}



void PB5() {

    double numbers[] = {1,3,9,10.99};
    int length = sizeof(numbers) / sizeof(numbers[0]);

        
    

    cout << "The result for the list [1,3,9,10.99] :" << sumDoubles(numbers,length);

}

//---------------------------------------------------------------------------------------------------------


int main(int argc, const char *argv[]) {

  void (*pbFunctions[])() = {PB1, PB2, PB3, PB4,
                             PB5}; // Add all your PB functions here

  int choice;
  cout << "Choose the problem number \n";
  cin >> choice;

  cout << "This is the problem " << choice << " solution!\n";
  pbFunctions[choice - 1]();
  cout << "\n";

  return 0;
}
