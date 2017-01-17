#ifndef CSVFILE_H_
#define CSVFILE_H_

#include <fstream>
#include <vector>
#include <string>

#include "Transaction.h"

class CSVFile
{
public:
                                CSVFile(const char* FileName, std::ios_base::openmode Mode = std::ios_base::in);
    bool                        IsOpen() const { return file.is_open(); }

    void                        ReadTransactions(std::vector<Transaction>& Transactions);
    
private:
	std::fstream				file;
};

#endif
