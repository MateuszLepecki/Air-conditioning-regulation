#pragma once
#include "Klimatyzator.h"
#include "Termometr.h"
class CSterownik
{
public:
	CSterownik(void);
	~CSterownik(void);
	float temp_zadana;
	float aktualna_temp;
	void take_temp(CTermomert*);
	void ustaw_klim (CKlimatyzator*);
};

