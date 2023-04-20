//Ques: Reverse a String
#include <iostream>
#include <cstring>
using namespace std;

//Approach :- using two pointers approach

void reverseCharArray(char name[])
{
	int i = 0;
	int n = strlen(name); // ye apni total length fing kr lega
	int j = n - 1;

	while(i <= j)
	{
		swap(name[i], name[j]);
		i++;
		j--;
	}
}

int main(int argc, char *argv[])
{
	char name[100];

	cin >> name;

	cout << "Initiallly: " << name << endl;
	reverseCharArray(name);
	cout << "After Reversel Process : " << name << endl;
	
	return 0;
}
