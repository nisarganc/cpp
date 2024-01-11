    #include<iostream>
	#include<fstream>
	#include<ctype.h>
	#include<string.h>
	using namespace std;
	class Contact
	{
	private:
		char name[20];
		char phone[20];
	public:

	friend istream & operator >> ( istream &in , Contact &arg)
	{
	cout << "Enter name and phone \n";
	in >> arg.name >> arg.phone;
	strupr( arg.name );
	return in;
	}

	friend ostream & operator << ( ostream &out , Contact &arg )
	{
	  out << arg.name << "\t\t" << arg.phone << endl;
	  return out;
	}

	char * getName()
	{
	  return name;
	}

	char getFirstLetter()
	{
	 return name[0];
	}
	};

	class AddressBook
	{
	private:
		int getCount()
		{
		  ifstream fp;
		  fp.open( "contactdb.dat", ios::in );
		  fp.seekg( 0 , ios::end );
		  int recs = fp.tellg()  / sizeof( Contact );
		  fp.close();
		  return recs;
		 }

	public:
		void Add()
		{
		  Contact c;
		  cin >> c;
		  ofstream fp;
		  fp.open("contactdb.dat", ios::app);
		  fp.write( (char *)&c , sizeof(c) );
		  fp.close();
		}

		void Display()
		{
		Contact c;
		int recs = getCount();
		ifstream fp;
		fp.open("contactdb.dat", ios::in);
		for(int i=1; i<=recs; i++)
		{
		  fp.read( ( char *)&c , sizeof(c));
		  cout << c;
		}
		fp.close();
		}

		void Display(char name[ ])
		{
		Contact c;
		int recs = getCount();
		ifstream fp;
		fp.open("contactdb.dat", ios::in);
		for(int i=1; i<=recs; i++)
		{
		  fp.read( ( char *)&c , sizeof(c));
          if( stricmp( c.getName() , name ) == 0 )
                cout << c;
		}
		fp.close();
		}

		void Display(char letter )
		{
		Contact c;
		int recs = getCount();
		ifstream fp;
		fp.open("contactdb.dat", ios::in);
		for(int i=1; i<=recs; i++)
		{
		  fp.read( ( char *)&c , sizeof(c));
		  if( c.getFirstLetter() == letter )
			  cout << c;
		}
		fp.close();
		}

		void ContextSearch( char name[ ] )
		{
		Contact c;
		int recs = getCount();
		ifstream fp;
		fp.open("contactdb.dat", ios::in);
		for(int i=1; i<=recs; i++)
		{
		  fp.read( ( char *)&c , sizeof(c));
		  if( strstr( c.getName() , name ) != NULL )
			  cout << c;
		}
		fp.close();
		}
	};


	void main()
	{
	   int ch;
	   char name[20] , letter;
	   AddressBook book;
	   while( 1 )
	   {
	       clrscr();
	       cout << "1. Add new contact \n";
	       cout << "2. Display contacts\n";
	       cout << "3. Search by name \n";
	       cout << "4. Context search\n";
	       cout << "5. Index search\n";
	       cout << "6. Exit\n";
	       cin >> ch;

		switch( ch )
		{
		case 1:
			book.Add();
			break;
		case 2:
			book.Display();
			break;
		case 3:
			cout << "Enter name\n";
			cin.ignore();
			cin.getline( name , 20 );
			book.Display( name );
			break;
		case 4:
			cout << "Enter name\n";
			cin.ignore();

			cin.getline( name , 20 );
			strupr( name );
			book.ContextSearch( name );
			break;
		case 5:
			cout << "Enter letter for index search " << endl;
			cin >> letter;
			letter = toupper( letter );
			book.Display( letter );
			break;
		case 6:
			return;
		}
	       getch();
	     }

	   }








