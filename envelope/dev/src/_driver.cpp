#include "CSVFile.h"
#include "USDollarAmount.h"

using namespace std;

int main(int argc, char** argv)
{
	//CSVFile dataFile("data/2017-01.csv");
	
	
	USDollarAmount start("40789.97");
	USDollarAmount transaction("-1.62");
	USDollarAmount curr = start + transaction;
	
	transaction = "-297.72";
	curr = curr + transaction;
	
	
	USDollarAmount a("12.34");
	USDollarAmount b(a);			// copy ctor
	USDollarAmount c = b;			// also copy ctor
	USDollarAmount d = "23.45";		// ctor defined for string

	d = "-34.45";					// operator= for string
	d = "45";						// make sure that if it's a pure integer, that cents gets correctly reset
	d = a;							// compiler-generated operator= for USDollarAmount

	return 0;
}