//Write a C++ program to create class student with data members name & age. Member function are get_details() and display_details(). Call both member functions using object of the class. 
//220130318026
//saija hetvi
#include<iostream>
using namespace std;
class student
{
   private :
   	  	string name;
   	  	int age;
   
   public  :
   		void get_detail()
   		{
			cout<<"enter your good name::";
			getline(cin,name);
			
			cout<<"enter your age::";
			cin>>age; 
    	}
    	void display_detail()
    	{
    		cout<<"your name is::"<<name<<endl;
    		cout<<"your age is::"<<age<<endl;
		}
};
int main()
{
	student s1;
	 s1.name(yashvi)//s1.get_detail();
	s1.age(17)//s1.display_detail();
	return 0;
}
