 	#include<iostream>
	#include<string.h>
	using namespace std;
	class Person
	{
	private:
		int m_pid , m_age;
		char m_name[20];
	public:
		Person( int pid , char name[ ] , int age )
		{
		 m_pid = pid;
		 strcpy( m_name , name );
		 m_age = age;
		}

		void showDetails( )
		{
		cout << "-------------------------" << endl;
		cout << "Person id  :" << m_pid  << endl;
		cout << "Person name:" << m_name << endl;
		cout << "Person age :" << m_age << endl;
		}
	};

	class Company : public Person
	{
	private:
		char m_dept[20] , m_job[20];
		int m_salary;
	public:

	Company( int pid , char name[ ] , int age , char dept[ ] , char job[ ] , int sal ) : Person ( pid , name , age )
	{
	  strcpy( m_dept , dept );
	  strcpy( m_job , job );
	  m_salary = sal;
	}

	void showDetails( )
	{
	  Person::showDetails();
	  cout << "Department   :" << m_dept << endl;
	  cout << "Job          :" << m_job << endl;
	  cout << "Salary       :" << m_salary << endl;
	  cout << "--------------------------"<< endl;
	}

	};

	class Student : public Person
	{
	private:
		char m_college[20];
		int m_semis;
	public:

	Student( int pid , char name[] , int age , char college[ ] , int semis ) : Person( pid , name , age )
	{
	  strcpy( m_college , college );
	  m_semis = semis;
	}

	void showDetails( )
	{
	 Person::showDetails( );
	 cout << "College       :" << m_college << endl;
	 cout << "Semister      :" << m_semis << endl;
	  cout << "--------------------------"<< endl;
	}

	};


	int main()
	{

	 Student s(1 , "Sam" , 20 , "MIT", 3 );
	 s.showDetails( );

	 Company c(1 , "Mike" , 32 , "Help desk", "Designer",  25000);
	 c.showDetails( );

	}































