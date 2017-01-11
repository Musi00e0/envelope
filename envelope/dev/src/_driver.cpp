#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	ifstream dataFile("data/2017-01.csv");
	if (dataFile.is_open())
	{
		string line;
		while (!dataFile.eof())
		{
			getline(dataFile, line);
			cout << line << endl;
		}
	}
	else
	{
		cout << "Couldn't open the data file.  Check working directory" << endl;
	}

	return 0;
}