#ifndef CSVFILE_H_
#define CSVFILE_H_

#include <fstream>
#include <vector>
#include <string>

class CSVFile
{
public:
				CSVFile(const char* FileName, std::ios_base::openmode Mode = std::ios_base::in);


private:
	std::fstream				file;
	std::vector<std::string>	transactions;
};

#endif
