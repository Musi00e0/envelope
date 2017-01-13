#include "CSVFile.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int NUM_HEADER_LINES = 8;

CSVFile::CSVFile(const char* FileName, ios_base::openmode Mode) : file(FileName, Mode)
{
	if (file.is_open())
	{
		string line;
		for (int i = 0; i < NUM_HEADER_LINES && !file.eof(); i++)
		{
			getline(file, line);
		}

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