#include "plane.h"

class atom{
	private:
		int p, n, e;
		ot coord, v;
		atom *bonds[4];
		static double 
	public:
		atom();
		atom(int);//just proton number(creates avg neutron num for element)
		atom(int, int, int);
		dist(ot);
		ot loc();
//---- @interface section ----
		int element();
		int charge();
		atom* getBonds(int);
		
