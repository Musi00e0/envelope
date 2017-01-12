#ifndef CSVFILE_H_
#define CSVFILE_H_

#include <fstream>

class CSVFile
{
public:
				CSVFile(const char* FileName, std::ios_base::openmode Mode = std::ios_base::in);


private:
	std::fstream	file;
};

#endif
