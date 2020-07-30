#include "Klimatyzator.h"
#include <iostream>

using namespace std;
CKlimatyzator::CKlimatyzator(void)
	: my_stan(0)
{
}


CKlimatyzator::~CKlimatyzator(void)
{
}


void CKlimatyzator::pokaz_stan()
{
	cout << "Stan klimatyzatora to: " << my_stan << endl;
}