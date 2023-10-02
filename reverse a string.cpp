//#include <iostream>
//#include <stack>
//using namespace std;
//
//int reverseSentence(string s)
//{
//	stack<string> st; // built an stack
//
//	for (int i = 0; i < s.length(); i++) // taking the whole lenght of a string "s"
//	{
//		string word = "";					  // word stores the empty string ""
//		while (s[i] != ' ' && i < s.length()) // jab tak space nahi ajata till that push word in stack
//		{
//			word += s[i];	// add and assign the word to the variable--> word
//			i++;			// a b c d ..... d c b a
//		}					// jab i=0 & s.lenght = 0 hogyi to break and pop the stack
//		while (!st.empty()) // not strue that stack is empty ..till that top se pop krta jayega
//		{
//			cout << st.top() << " ";
//
//			st.pop();
//		}
//		cout << endl;
//	}
//	// what is your name .....name your is what
//}
//int main()
//{
//	string s = "hey, hello yash! ";
//	reverseSentence(s);
//	return 0;
//}








// C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse words*/
void reverseWords(string s)
{

	// temporary vector to store all words
	vector<string> tmp;
	string str = "";
	for (int i = 0; i < s.length(); i++) {

		// Check if we encounter space
		// push word(str) to vector
		// and make str NULL
		if (s[i] == ' ') {
			tmp.push_back(str);
			str = "";
		}

		// Else add character to
		// str to form current word
		else
			str += s[i];
	}

	// Last word remaining,add it to vector
	tmp.push_back(str);

	// Now print from last to first in vector
	int i;
	for (i = tmp.size() - 1; i > 0; i--)
		cout << tmp[i] << " ";
	// Last word remaining,print it
	cout << tmp[0] << endl;
}

// Driver Code
int main()
{
	string s = "i like this program very much";
	reverseWords(s);
	return 0;
}

