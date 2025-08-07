#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // constant variables
    const char FILL = '-';
    const int WIDTH = 50;
    
    // seed the RNG
    srand(time(0));

    // TODO: create the array of size 7 for the magic 8-ball responses
    const unsigned SIZE = 7;
    string responses[7];
    // TODO: let the user enter their own fortunes
    //       using a range-based `for` loop
    for (string element : responses){
    	cout << "Enter your answer index: \n";
    	getline(cin, element);
    }
    // greeting message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "        THE MAGIC 8-BALL HAS BEEN SUMMONED!\n";

    // TODO: use a loop to let the user enter their questions
    //       you should be able to just copy-and-paste your loop from part A
    for (bool flag = true; flag != false;){
        	cout << "Enter a question below, so that I might answer it:\n";
        	string quest;
        	getline(cin, quest);
        	cout << endl;
        	cout << responses[0 + rand() % SIZE] << endl;
        	cout << endl;
        	cout << "Enter yes to continue: ";
        	string userInputCont;
        	getline(cin, userInputCont);
        	if (userInputCont == "yes"){
        		flag = true;
        	}
        	else {
        		flag = false;
        	}
        }
    // final message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "           THE MAGIC 8-BALL NOW DEPARTS!\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // terminate
    return 0;
}
