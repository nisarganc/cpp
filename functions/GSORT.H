 
	#include<string.h>

	template<class T>
 	void sort( T a[ ] , int n )
	{
	  int i, j;
	  
		for(i=0; i<n-1; i++)
		{
		  for(j=i+1; j<n; j++)
		  {
		    if(a[i] > a[j])
		    {
			T temp = a[i];
			a[i] =a[j];
			a[j] = temp;
		     }
		   }
		}
	 }

 	void sort( char name[ ][20] , int n )
	{
	  int i, j;
	  char temp[20];

		for(i=0; i<n-1; i++)
		{
		  for(j=i+1; j<n; j++)
		  {
		    if( strcmp( name[i],name[j] ) > 0 )
		    {
			strcpy( temp , name[i]);
			strcpy( name[i] , name[j]);
			strcpy( name[j] , temp );
		     }
		   }
		}
	 }