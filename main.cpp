#include <iostream>
#include "Klimatyzator.h"
#include "Sched.h"
#include "Sterownik.h"
#include "Termometr.h"
#include "WirtualnyPokoj.h"
using namespace std;
int main()
{
	CKlimatyzator klimatyzator;
	CSterownik sterownik;
	CTermomert termometr;
	CWirtualnyPokoj pokoj;
	CSched sched;
	cout << "Jaka ma byc temperatura poczatkowa w pokoju?" << endl;
	cin >> termometr.my_temp;
	cout << "Jaka ma byc temperatura zadana?" << endl;
	cin >> sterownik.temp_zadana;
	cout << "ile razy ma sie powtorzyc?" << endl;
	cin >> sched.ile_razy;
	cout << "jaki czas przerwy(jak dlugi wait- w sekundach)?" << endl;
	cin >> sched.cycle_time;
	sched.run(&sterownik, &pokoj, &klimatyzator, &termometr);
	
	
	
	/*for (int i = 0; i < 30; i++)
	{
		klimatyzator.pokaz_stan();
		sterownik.take_temp(&termometr);
		termometr.pokaz_temp();
		sterownik.ustaw_klim(&klimatyzator);
		pokoj.zmien_temp(&klimatyzator, &termometr);
		cout << "\\\\|////" << endl;
	}*/
	
	system("pause");
	return 0;
}