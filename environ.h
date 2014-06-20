class environ{
	private:
		double[3] accel;
		vector<plane> bounds;
	public:
		plane addBound();
		void clearBounds();
		void setAccelX(double x);
		void setAccelY(double y);
		void setAccelZ(double z);
		double getAX();
		double getAY();
		double getAZ();
		int getBoundNum();
		plane getBound(int num);
}
