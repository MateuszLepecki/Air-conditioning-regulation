#include "WirtualnyPokoj.h"


CWirtualnyPokoj::CWirtualnyPokoj(void)
	: delta_T1(0.6)
	, delta_T2(-0.4)
{
}


CWirtualnyPokoj::~CWirtualnyPokoj(void)
{
}

void CWirtualnyPokoj::zmien_temp(CKlimatyzator* klima, CTermomert* term)
{
	if (klima->my_stan == 0)
	{
		term->my_temp = term->my_temp + delta_T1;
	}
	else
	{
		term->my_temp = term->my_temp + delta_T2; 
	}
}