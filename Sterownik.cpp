#include "Sterownik.h"


CSterownik::CSterownik(void)
	: temp_zadana()
{
}


CSterownik::~CSterownik(void)
{
}


void CSterownik::take_temp(CTermomert* termometr)
{
	aktualna_temp=termometr->my_temp;
}

void CSterownik::ustaw_klim (CKlimatyzator* klimatyzator)
{
	if (aktualna_temp>=temp_zadana)
	{
		klimatyzator->my_stan=1;//klima za³¹czona
	}
	else
	{
		klimatyzator->my_stan=0;//klima wy³¹czona
	}
}