#include<iostream>
using namespace std;

class student{
	string name;
	int roll,sgpa;
	public:
	void shellsort(student a[],int n);
	void get_data();
	void display();
};
 void student::get_data(){
 	cout<<"enter student details"<<endl;
 	cout<<"enter name";
 	cin>>name;
 	cout<<"enter roll no";
 	cin>>roll;
 	cout<<"enter sgpa";
 	cin>>sgpa;
 }
 void student::display(){
 	
 		cout<<"Name: "<<name;
 		cout<<" Roll "<<roll;
 		cout<<" Sgpa "<<sgpa<<endl;
 	
 };
void student::shellsort(student a[],int n){
	int gap=n/2;
	while(gap>=1){
		for(int j=gap;j<n;j++){
			for(int i=j-gap;i>=0;i=i-gap){
				if(a[i].name>a[i+gap].name){
				student temp=a[i];
				a[i]=a[i+gap];
				a[i+gap]=temp;
				}
				else{
				break;
				}
			}
		}
		gap=gap/2;
	}
	cout<<"Shell sort implemented successfully";
}

int main(){
	int n;
	cout<<"Enter number of students";
	cin>>n;
	student a[n],x;
	for(int i=0;i<n;i++){
	 a[i].get_data();
	}
	x.shellsort(a,n);
	cout<<"Students roll list: ";
 	
	for(int i=0;i<n;i++){
	a[i].display();
	}
	return 0;
}
