#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

void   printParallel(const double[], const string[], const int);
double updateAndSum(double[], const string[], const int);

/*******************************************************************************
 * Description:
 * Starting point of the program. Creates two arrays. Uses loops to let the user
 * populate the arrays. Calls functions to print out and update the arrays in
 * parallel.
 *
 * Input(s):
 * N/A
 *
 * Output:
 * An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    // declare first array
    const int SIZE = 5;
    double firstArray[SIZE];

    // TODO: range-based `for` loop to get user input for `firstArray`
    for(int i = 0; i < SIZE; i++){
    	cout << "Enter a floating-point number: ";
    	cin >> firstArray[i];
    }
    cin.ignore();
    // declare second array
    string secondArray[SIZE];

    // TODO: normal `for` loop to get user input for `secondArray`
    for(int i = 0; i < SIZE; i++){
    	cout << "Enter a name: ";
    	getline(cin, secondArray[i]);
    }
    // TODO: function calls (print, update, then print again)
    printParallel(firstArray, secondArray, SIZE);
    cout << endl;
    double sum = updateAndSum(firstArray, secondArray, SIZE);
    cout << "Sum: " << sum << endl;
    cout << endl;
    printParallel(firstArray, secondArray, SIZE);
    // terminate
    return 0;
}

void   printParallel(const double num[], const string name[], const int SIZE){
	int i = 0;
	while(i < SIZE){
		cout << num[i] << " " << name[i] << endl;
		i++;
	}
}

double updateAndSum(double num[], const string name[], const int SIZE){
	double sum = 0;
	for(int i = 0; i < SIZE; i++){
		sum += (name[i].length() + num[i]);
	}
	return sum;
}
