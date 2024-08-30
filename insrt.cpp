#include<iostream>
using namespace std;

class Student
{
	string name;
	int roll,sgpa;
	public:
	 void get();
	 void show();
	 void insertion(Student s[],int n);
	
};
void Student::get(){
 	cout<<"enter Name of student :";
	cin>>name;
	cout<<"Enter roll no : ";
	cin>>roll;
	cout<<"Enter SGPA of student :";
	cin>>sgpa;
 	}

void Student::insertion(Student s[],int n){
	for(int i=0;i<n;i++){
	Student val=s[i];
	int j=i-1;
	while(j>=0 && val.roll<s[j].roll){
	s[j+1]=s[j];
	j--;
	}
	s[j+1]=val;
	}
}
void Student::show(){
 	cout<<endl<<"Name: "<<name<<" ";
	cout<<"rollno "<<roll<<" ";
	cout<<"SGPA "<<sgpa<<" ";
 	}

int main()
{
 int m,choice;
 char ch;
 cout<<"Enter number of students";
 cin>>m;
 Student s[m],x;
 int n=sizeof(s)/sizeof(s[0]);
 do{
 cout<<"enter your choice";
 cin>>choice;
 switch(choice)
 {
 	case 1:
 		for(int i=0;i<m;i++){
 		s[i].get();
 		}
 		break;
 	case 2:
 		for(int i=0;i<m;i++){
 		s[i].get();
 		}
 		x.insertion(s,n);
 		break;
 	case 3:
 		  for(int i=0;i<m;i++){
 		s[i].show();
 		}
 		cout<<"executed successfully";
 		break;
 	case 4:
 		cout<<"entered wrong choice";
 		break;		
 }
  cin>>ch;
 }
 while(ch=='y');
 return 0;
}
