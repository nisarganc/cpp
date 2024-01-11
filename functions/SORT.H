 
	#include<string.h>

	void sort( int a[ ] , int n )
	{
	  int i , j , temp;	
  	 for( i=0; i<n-1; i++)
	 {
	    for( j=i+1; j<n; j++)
	    {
	        if( a[i] > a[j] )
	       {
	             temp = a[i];
	             a[i] = a[j];
	             a[j]=temp;
	        }
	     }
	   }
	}


	void sort( float a[ ] , int n )
	{
	  int i , j ;
	  float temp;	
  	 for( i=0; i<n-1; i++)
	 {
	    for( j=i+1; j<n; j++)
	    {
	        if( a[i] > a[j] )
	       {
	             temp = a[i];
	             a[i] = a[j];
	             a[j]=temp;
	        }
	     }
	   }
	}
	

	void sort( char name[][20] , int n )
	{
	  int i , j ;
	  char temp[20];
  	 for( i=0; i<n-1; i++)
	 {
	    for( j=i+1; j<n; j++)
	    {
	        if( strcmp ( name[i] , name[j] ) > 0 )
	       {
	             strcpy( temp , name[i] );
	             strcpy( name[i] , name[j] );
	            strcpy( name[j] , temp );
	        }
	     }
	   }
	}
	
	
	
	
	