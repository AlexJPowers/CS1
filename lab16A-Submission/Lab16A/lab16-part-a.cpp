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

    // TODO: create the array of size 12 for the magic 8-ball responses
    //       and initialize the elements using the given responses on Canvas
    const unsigned SIZE = 12;
    string responses[SIZE] = {"Yes, of course!","Without a doubt, yes.","You can count on it.","For sure!",
    		"Ask me later.","I'm not sure . . .","I can't tell you right now.",
			"I'll tell you after my nap. Zzzzzz", "No way!","I don't think so.","Without a doubt . . . no!",
			"The answer is very clearly NOOOOO"};
/*    string responses[SIZE];
    responses[0] = "Yes, of course!";
    responses[1] = "Without a doubt, yes.";
    responses[2] = "You can count on it.";
    responses[3] = "For sure!";
    responses[4] = "Ask me later.";
    responses[5] = "I'm not sure . . .";
    responses[6] = "I can't tell you right now.";
    responses[7] = "I'll tell you after my nap. Zzzzzz";
    responses[8] = "No way!";
    responses[9] = "I don't think so.";
    responses[10] = "Without a doubt . . . no!";
    responses[11] = "The answer is very clearly NOOOOO";*/
    // greeting message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "        THE MAGIC 8-BALL HAS BEEN SUMMONED!\n";

    // TODO: use a loop to let the user enter their questions
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
