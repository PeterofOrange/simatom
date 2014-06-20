//Peter Schatteman, C++ plane, adapted from CPSC 102-001, 15 April 2013
//Upon the twentieth of June, Anno Domini MMXIV
//plane.h

#include "atom.h"

class ot{//Ordered Triplet
	private:
		double a, b, c;
	public:
		ot();
		ot(double, double, double);
		seta(double);
		setb(double);
		setc(double);

		double geta();
		double getb();
		double getc();
}

class plane{
	private:
		ot normal;
		ot point;
		double ndotq;

	public:
		plane();
		plane(ot, ot);//Normal, then point
		ot getNormal();
		ot getPoint();
		bool collisionTest(atom);//Don't Implement This Yet!!!
}
