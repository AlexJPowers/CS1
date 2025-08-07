#include <iostream>
using namespace std;

/*******************************************************************************
 * Global variable
*******************************************************************************/

const int COL_SIZE = 5;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

int total(const int[][COL_SIZE], const int);
double average(const int[][COL_SIZE], const int);
void userInit(int[][COL_SIZE], const int);

/*******************************************************************************
 * Description:
 * Starting point of the program. Declares and initializes a 2D array. Displays
 * the total sum and the average value. Repeats but with user values.
 *
 * Input:
 * N/A
 *
 * Output:
 * An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    const int ROW_SIZE = 4;

    // TODO: declare and initialize a 2D array
    int matrix[ROW_SIZE][COL_SIZE] = {

    		//row 0
    		{117, -76, 128, -68, 85},
			//row 1
			{105, 34, -79, 54, 105},
			//row 2
			{-85, 151, 133, -50, 173},
    		//row 3
    		{-38, -20, 185, 173, -49},

    };
    // TODO: call functions to display the calculations
    int sum = total(matrix,ROW_SIZE);
    cout << "Total: "  << sum << endl;
    double avg = average(matrix,ROW_SIZE);
    cout << "Average: " << avg << endl;
    // now let the user try
    cout << "\nNow it's your turn!\n";

    // TODO: create a 2D array for the user with different row size
    const int row_size_b = 2;
    int matrix_b[row_size_b][COL_SIZE];
    // TODO: call functions to let user initialize 2D array and calculate again
    userInit(matrix_b,row_size_b);
    int userSum = total(matrix_b,row_size_b);
    cout << "Your total: " << userSum << endl;
    int userAvg = average(matrix_b,row_size_b);
    cout << "Your average: " << userAvg;
    // terminate
    return 0;
}

int total(const int mTotal[][COL_SIZE], const int size){
	int sum = 0;
	for(int row = 0; row < size; row++){
		for(int col = 0; col < COL_SIZE; col++){
			sum += mTotal[row][col];
		}
	}
	return sum;
}

double average(const int mTotal_B[][COL_SIZE], const int size){
	int sum = 0;
		for(int row = 0; row < size; row++){
			for(int col = 0; col < COL_SIZE; col++){
				sum += mTotal_B[row][col];
			}
		}
	double avg = sum / (size * COL_SIZE);
	return avg;
}

void userInit(int mtrix[][COL_SIZE], const int size){
	for(int row = 0; row < size; row++){
		if (row == 0){
			cout << "Enter 5 numbers in a row (1/2): ";
		}
		else{
			cout << "Enter 5 numbers in a row (2/2): ";
		}
		for(int col = 0; col < COL_SIZE; col++){
			cin >> mtrix[row][col];
		}
	}
}

