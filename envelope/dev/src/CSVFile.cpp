#include "CSVFile.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

CSVFile::CSVFile(const char* FileName, ios_base::openmode Mode) : file(FileName, Mode)
{
	if (file.is_open())
	{
		string line;
		while (!file.eof())
		{
			getline(file, line);
			cout << line << endl;
		}
	}
	else
	{
		cout << "Couldn't open the data file.  Check working directory" << endl;
	}
}