#pragma once
#include "Klimatyzator.h"
#include "Termometr.h"
class CWirtualnyPokoj
{
public:
	CWirtualnyPokoj(void);
	~CWirtualnyPokoj(void);
	
	float delta_T1;
	float delta_T2;
	void zmien_temp(CKlimatyzator*, CTermomert*);
};

