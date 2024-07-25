/*Write a function void display triangle(int n, char direction) { .. }
That takes an integer and a character as parameters.If the character is ‘i’(for increasing), it displays
a triangle of increasing ‘* ’.If the character is ‘d’(for decreasing), it displays a triangle of
decreasing ‘* ’. (Hint: use a nested for loop to display).
Example: display(3, ‘i’) displays*
**
***
and display(3, ‘d’) displays***
**
*
Incorporate the function in a program that asks the user to enter the size and direction of the triangle, then
calls the function.*/

#include <iostream>

using namespace std;

void display_tri(int n, char dc) {
	
		if (dc == 'i') {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j<= i; j++) {
					cout << "*";
				}cout << endl;
			}
		}
		else if (dc == 'd') {
			for (int i = nd; i >0; i--) {
				for (int j = 0; j < i; j++) {
					cout << "*";
	
				}cout << endl;
			}
		}
	
	}
	
	int main() {
		char input;
		int n;
		cout << "please enter the size first; then 'i' for increasing, 'd' for decreasing order: ";
		cin >> n >> input;
		display_tri(n, input);
	
	}
