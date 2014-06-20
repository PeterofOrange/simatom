//Peter Schatteman, environ.h, gravity/boundaries storage and access
//The Nineteenth of June, the Year of Our Lord MMXIV

#include "plane.h"

class environ{
	private:
		ot accel;
		vector<plane> bounds;
	public:
		void addBound(plane);
		void clearBounds();
		void setAccel(ot);
		double getAccel();
		int getBoundNum();
		plane getBound(int);
}
