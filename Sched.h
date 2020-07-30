#pragma once
#include "Sterownik.h"
#include "WirtualnyPokoj.h"
class CSched
{
public:
	CSched(void);
	~CSched(void);
	int ile_razy;
	float cycle_time;
	void run(CSterownik*, CWirtualnyPokoj*, CKlimatyzator*, CTermomert*);
};

