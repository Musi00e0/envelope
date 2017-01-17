#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include <string>

#include "USDollarAmount.h"

class Transaction
{
    
public:
                            Transaction(const std::string& Representation);
    
private:
    std::string         date;
    std::string         desc;
    USDollarAmount      amount;
};


#endif //TRANSACTION_H_
