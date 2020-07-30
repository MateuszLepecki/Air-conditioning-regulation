#include "Sched.h"
#include <iostream>
#include <windows.h>

using namespace std;

CSched::CSched(void)
	: ile_razy(0)
	, cycle_time(0)
{
}


CSched::~CSched(void)
{
}


void CSched::run(CSterownik* ster, CWirtualnyPokoj* pokoj, CKlimatyzator* klimatyzator,CTermomert* term)
{
	int i;
	for (i = 0; i < ile_razy; i++)
	{
		klimatyzator->pokaz_stan();
		ster->take_temp(term);
		term->pokaz_temp();
		ster->ustaw_klim(klimatyzator);
		pokoj->zmien_temp(klimatyzator, term);
		cout << "|||||" << endl;
		Sleep(cycle_time*1000);
	}
}
