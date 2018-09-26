//class definition
#ifndef DATA_H //Header guard
#define DATA_H //Header guard

class Data
	{
		private:

		int x;
		float y;

		public:
		
		Data ();
		Data (int a, float b);
		void setX (int a);
		int getX ();
		void setY (float b);
		float getY ();
	

};
#endif
