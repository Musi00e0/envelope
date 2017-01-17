#include "Transaction.h"

using namespace std;

#include <iostream>

Transaction::Transaction(const string& Representation)
{
    date = Representation.substr(0, 10);
    
    size_t fieldStart = 11;
    size_t fieldEnd = Representation.find(',', fieldStart);
    
    // +1 here because we skip past the wrapper quotation mark.  -2 because the length is 2 shorter (a
    // quote mark at the beginning and the end
    desc = Representation.substr(fieldStart+1, fieldEnd-fieldStart-2);
    
    fieldStart = fieldEnd + 1;
    fieldEnd  = Representation.find(',', fieldStart);

    // similarly here
    amount = Representation.substr(fieldStart+1, fieldEnd-fieldStart-2);
    

    //cout << "date: " << date << ", desc: |" << desc << "|, amount: |" << amount << "|" << endl;
}
