//Peter Schatteman, environ.cpp, gravity/boundaries storage and access
//The Nineteenth of June, the Year of Our Lord MMXIV

//=============================================================================
//HEADER IMPLEMENTED
//=============================================================================
/*class environ{
	private:
		double accel[3];
		vector<plane> bounds;
	public:
		void addBound(plane);
		void clearBounds();
		void setAccelX(double);
		void setAccelY(double);
		void setAccelZ(double);
		double getAX();
		double getAY();
		double getAZ();
		int getBoundNum();
		plane getBound(int);
}*/

void environ::addBound(plane n_plane){
	bounds.push_back(n_plane);
}

void environ::clearBounds(){ bounds.clear(); }

void environ::setAccelX(double x){ accel[0] = x; }
void environ::setAccelY(double x){ accel[1] = x; }
void environ::setAccelZ(double x){ accel[2] = x; }

double environ::getAX(){ return accel[0]; };
double environ::getAY(){ return accel[1]; };
double environ::getAZ(){ return accel[2]; };

int environ::getBoundNum(){ return bounds.size(); }

plane getBound(int num){ return bounds[num]; }
