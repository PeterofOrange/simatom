//Peter Schatteman, environ.cpp, gravity/boundaries storage and access
//The Nineteenth of June, the Year of Our Lord MMXIV

//=============================================================================
//HEADER IMPLEMENTED
//=============================================================================
/*
 *class environ{
 *      private:
 *              ot accel;
 *              vector<plane> bounds;
 *      public:
 *              void addBound(plane);
 *              void clearBounds();
 *              void setAccel(ot);
 *              double getAccel();
 *              int getBoundNum();
 *              plane getBound(int);
 *}
 */

#include "environ.h"

void environ::addBound(plane n_plane){
	bounds.push_back(n_plane);
}

void environ::clearBounds(){ bounds.clear(); }

void environ::setAccel(ot x){ memcpy(x, accel, sizeof(ot)); }

double environ::getAccel(){ return new ot(accel.geta(), accel.getb(), accel.getc()); };

int environ::getBoundNum(){ return bounds.size(); }

plane environ::getBound(int num){ return bounds[num]; }
