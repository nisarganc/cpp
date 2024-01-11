	#include<iostream>
	using namespace std;
	class Winxp
	{
	public:
		void calc( )
		{
		cout << "Calculator" << endl;
		}

		void officetools( )
		{
		cout << "Ms office suite for complete office solution" << endl;
		}
	};

	class Winvista : public Winxp
	{
	public:
		void Security( )
		{
		cout << "Security features are added" << endl;
		}

		void Internet( )
		{
		cout << "Internet tool and applications are added" << endl;
		}
	};

	class Windows7 : public Winvista
	{
	public:
		void Graphics( )
		{
		 cout << "Graphics with morphing feature" << endl;
		}

		void Performance()
		{
		 cout << "Virtual memory management , performance boosting , internet security , phishing control..." << endl;
		}
	};

	int main()
	{
			Windows7 w;
			w.calc( );
			w.officetools( );
			w.Security( );
			w.Graphics( );
			w.Performance();
			return 0;
	}
