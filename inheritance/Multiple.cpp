#include<iostream>
using namespace std;
class BM
	{
	public:
		int cube( int n)
		{
		 return n * n * n;
		}

		int add( int a , int b )
		{
		 return a + b;
		}
	};

	class EM
	{
	public:
		int fact( int n )
		{
		int f = 1;
		for(int i=1; i<=n; i++)
			f = f * i;

		return f;
		}
	};

	class Util : public BM , public EM
	{
	public:
		void binaryConversion( int n )
		{
		 if( n != 0 ) binaryConversion(n/2);
		 cout << n % 2;
		}
	};

	int main()
	{
	 Util u;
	 cout << u.add( 10 , 20 ) << endl;
	 cout << u.fact( 5 ) << endl;
	 u.binaryConversion( 14 );
	 return 0;
	}
