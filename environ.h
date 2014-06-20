//Peter Schatteman, environ.h, gravity/boundaries storage and access
//The Nineteenth of June, the Year of Our Lord MMXIV

class environ{
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
}
