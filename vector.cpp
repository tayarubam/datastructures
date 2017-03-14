#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> myVector;
	
	myVector.push_back(4);
	myVector.push_back(5);
	myVector.push_back(6);
	myVector.push_back(7);
	myVector.push_back(8);

	//Print the vector
	for(int i=0; i<myVector.size(); i++)
	{
		cout<<myVector.at(i);	
	}
	cout<< endl;
}
