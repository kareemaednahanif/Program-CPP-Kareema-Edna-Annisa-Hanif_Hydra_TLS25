#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//function to reverse and filter the given code
string reverseAndFilter(const string& firstStr){
	string strFilter = "";
	
	for(char character : firstStr){ //the ASCII code will be erased because we already know it's the first letter of the reversed word
		if(isalpha(character)){
			strFilter += character;
		}
	}
	
	string strResult = "";
	int length = firstStr.length();
	for(int i = length - 1; i >= 0; i--){ //to rearrange the code after filtered
		strResult += strFilter[i];
	}	
	return strResult;
}

//function to insert character
string insertChar(string str){
	str.insert(3, 1, 'e'); //insert an 'e' between 'G' and 'r'
	str.insert(6, 1, 'a'); //insert an 'a' between 'm' and 'n'
	return str;
}

int main(){
	string firstWord = "nm71rG"; //the code
	string reverseWord = reverseAndFilter(firstWord);
	string lastWord = insertChar(reverseWord);
	cout << "First word: " << firstWord << endl;
	cout << "Reverse word: " << reverseWord << endl;
	cout << "Last word: " << lastWord;
	
	return 0;
} 
