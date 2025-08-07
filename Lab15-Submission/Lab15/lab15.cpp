#include <cmath>
#include <iostream>

using namespace std;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

int getUserNumber();
bool isValid(int);
void calculate(int, int, int, int&);

/*******************************************************************************
 * Description:
 * Starting point of the program. Gets three valid numbers from the user.
 * Calculates and displays the result.
 *
 * Input:
 * N/A
 *
 * Output:
 * An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main()
{
    // TODO: get the first valid number
    int a = getUserNumber();
    // TODO: get the second valid number
    int b = getUserNumber();
    // TODO: get the third valid number
    int c = getUserNumber();
    // TODO: calculate the result by calling the function
    int result;
    calculate(a, b, c, result);
    // TODO: display the result
    cout << result;
    // terminate
    return 0;
}

/*******************************************************************************
 * <TODO>
*******************************************************************************/

int getUserNumber()
{
    // TODO
	int userNum;
	do {
	cout << "Enter a number: ";
	cin >> userNum;
	} while (!isValid(userNum));
	return userNum;

}

/*******************************************************************************
 * <TODO>
*******************************************************************************/

bool isValid(int num)
{
    // TODO
	if(num >= 29 || (num / 2 + 3 <= 11)){
		return true;
	}
	else {
		return false;
	}
}

/*******************************************************************************
 * <TODO>
*******************************************************************************/

void calculate(int a, int b, int c, int& result)
{
    // TODO

	result = 4 * a + pow(b, 3) - 2 * c + 1;
}
