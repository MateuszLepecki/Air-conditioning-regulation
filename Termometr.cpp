#include "Termometr.h"
#include <iostream>

using namespace std;

CTermomert::CTermomert(void)
	: my_temp(21.5)
{
}


CTermomert::~CTermomert(void)
{
}


void CTermomert::pokaz_temp()
{
	cout << "Temperatura na termometrze to: " << my_temp << endl;
}
