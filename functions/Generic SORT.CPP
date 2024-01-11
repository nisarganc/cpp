 
	#include<iostream.h>
	#include<gsort.h>
	#include<conio.h>

	void main()
	{
	  int a[ ] = { 45 , 89 ,  4 , 1 , 27 };
	  float f[] = { 12.56 , 89.45 , 13.32 , 55.2 , 11.3 };
	  char name[][20] = {"javeed", "mohit", "shan", "arun", "bharath"};

	  clrscr();

	  sort( a , 5 );
	  sort( f, 5 );
	  sort( name , 5 );

	  for( int i=0; i<=4; i++)
	  cout << a[i] <<"\t" << f[i] << "\t" << name[i] << endl;

	}