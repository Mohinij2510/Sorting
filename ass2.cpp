#include<iostream>
using namespace std;

class employee{
	public:
	
	int id;
	string name;
	double salary;
	
	void get_data(){
	
		cout<<"Enter ID :";
		cin>>id;
		cout<<"Enter Name :";
		cin>>name;
		cout<<"Enter SALARY of Employee :";
		cin>>salary;
	 
	}
};
void quicksort(employee e[],int f,int l,int n){
	int pivot, i,j;
	employee temp;
	if(f<l){
		pivot=f;
		i=f+1;
		j=l;
		while(f<l){
			while(e[i].id<=e[pivot].id && i<l){
				i++;
				}
			while(e[j].id>e[pivot].id){
				j--;
				}

			if(i<j){
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
				}
			else{
				break;
				}
		}
		temp=e[pivot];
		e[pivot]=e[j];
		e[j]=temp;

		quicksort(e,f,j-1,n);
		quicksort(e,j+1,l,n);
}

}
void print(employee e[],int n){	
		cout<<"Sorted Employee data "<<endl;
		for(int i=0;i<n;i++){
		cout<<"Employee Id :"<<e[i].id<<endl;
		cout<<"Employee name :"<<e[i].name<<endl;
		cout<<"Employee Salary :"<<e[i].salary<<endl;
		}

}

int main(){
	int n;
	cout<<"Enter number of Employees :";
	cin>>n;
	employee e[n];
	
	for(int i=0;i<n;i++){
		e[i].get_data();
	}
	
	int f=0,l=n-1;
	quicksort(e,f,l,n);
	print(e,n);
	return 0;
	}
