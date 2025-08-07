/*
 * Lab20A.cpp
 *
 *  Created on: Apr 24, 2025
 *      Author: money
 */
//strncat
//
#include <cctype>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int main (){
	int user_menu_input_1;
	do {
		cout << "1. Enter cctype library" << endl;
		cout << "2. Enter cstring library" << endl;
		cout << "3. Enter string library" << endl;
		cout << "Please enter the library you would like to use: ";
		cin >> user_menu_input_1;
		if(user_menu_input_1 < 1 || user_menu_input_1 < 3){
			cout << "Error! Please enter a valid option...\n";
		}

	} while (user_menu_input_1 < 1 || user_menu_input_1 > 2);
	int cctype_func;
	int cstring_func;
	if(user_menu_input_1 == 1){ // cctype case
		do {
			cout << "1. isalnum" << endl;
			cout << "2. isblank" << endl;
			cout << "3. isprint" << endl;
			cout << "Please enter the function you would like to use: ";
			cin >> cctype_func;
		} while (cctype_func < 1 || cctype_func > 3);
		if(cstring_func == 1){
			char myChar = 'A';
			cout << "My char is: " << myChar << endl;
			if(isalnum(myChar)){
				cout << myChar << " is alphanumeric" << endl;
			}
			else{
				cout << myChar << " is not alphanumeric" << endl;
			}

		}
		else if (cstring_func == 2){
			char myChar = 'A';
			cout << "My char is: " << myChar << endl;
			if(isblank(myChar)){
				cout << myChar << " is a blank character" << endl;
			}
			else{
				cout << myChar << " is not a blank character" << endl;
			}


		}
		else if (cstring_func == 3){
			char myChar = 'A';
			cout << "My char is: " << myChar << endl;
			if(isprint(myChar)){
				cout << myChar << " is a printable character" << endl;
			}
			else{
				cout << myChar << " is not a printable character" << endl;
			}
		}
	}
	else if(user_menu_input_1 == 2){ // cstring case
		do {
			cout << "1. strcmp" << endl;
			cout << "2. strcat" << endl;
			cout << "3. strlen" << endl;
			cout << "Please enter the function you would like to use: ";
			cin >> cstring_func;
			cin.ignore();
		} while (cstring_func < 1 || cstring_func > 3);
		if(cstring_func == 1){
			char str1[] = "cash";
			char str2[] = "mash";
			cout << "String 1: " <<  str1 << endl;
			cout << "String 2: " << str2 << endl;
			cout << "Computing Function...\n" << endl;
			int result = strcmp(str1, str2);
			cout << "The result is " << result << " meaning...\n String 1 comes before string 2 lexicographically!";
		}
		else if (cstring_func == 2){
			cout << "strCAT? :3 :3 :3 :3 :3 :3 :3 :3 :3 :3 :3 :3... jk" << endl;
			char str1[] = "kitty";
			char str2[] = "mitty";
			cout << "String 1: " << str1 << endl;
			cout << "String 2: " << str2 << endl;
			cout << "Computing Function...\n" << endl;
			strcat(str1, str2);
			cout << "First string: " << str1 << " it's kitty with mitty?! :100:" << endl;
			cout << "Second string: " << str2 << " WAIT... it's still mitty?!!? :1000:" << endl;
		}
		else if (cstring_func == 3){
			const char* myString = "supsup";
			size_t length = strlen(myString);
			cout << myString << endl;
			cout << "Length of my string: " << length << endl;
		}
	}
	else if(user_menu_input_1 == 3){
		do {
			cout << "1. str.append" << endl;
			cout << "2. str.push_back" << endl;
			cout << "3. str.compare" << endl;
			cout << "Please enter the library you would like to use" << endl;
			cin >> cctype_func;
		}while(cctype_func < 1 || cctype_func > 3);
		if(cctype_func == 1){
			string str = "oompa";
			cout << "My string: " << str << endl;
			str.append(" loompa");
			cout << str << endl;
		}
		else if(cctype_func == 2){
			string str = "oompa";
			cout << "My string: " << str << endl;
			str.push_back('!');
			cout << str << endl;
		}
		else if(cctype_func == 3){
			string a = "oompa";
			string b = "loompa";
			int result = a.compare(b);
			if (result == 0){
				cout << "equal";
			}
			else if(result < 0){
				cout << "a first";
			}
			else{
				cout << "b first";
			}
		}
	}
	return 0;
}

