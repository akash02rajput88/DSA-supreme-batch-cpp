//Ques: Prints the length of a String
#include <iostream>
#include <cstring>
using namespace std;

int getLength(char name[])
{
	int length = 0;
	int i = 0;
	while(name[i] != '\0')
	{
		length++;
		i++;
	}
	return length;
}

int main(int argc, char *argv[])
{
	char name[100];
	cin >> name; // ye space ke baad wale word ko input main consider nahi karega

	//Agar humme space ke baad input lena ho tab kya karenge-
	//So we have two ways
	//getline(cin, name);
	cin.getline(name, 100);

	int ansLength = getLength(name);
	cout << "Length of String is : " << ansLength << endl;
	
	return 0;
}
