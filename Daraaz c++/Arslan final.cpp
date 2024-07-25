
#include<iostream>
#include<string>
using namespace std;
class Person{
public:
	string name;
	int n;
	int id_card_no;
	string address;
	string place_name;
	virtual void log(){
		if(n==1){
	   	cout<<"-----------------------------You are Admin----------------------"<<endl;
	   }
		cout<<"-------------------------------Welcome To Daraz App-------------------------------"<<endl;
		cout << "Enter your name " << endl;
	cin >> name;
	cout<<"------------------------"<<endl;
    cout<<"your name is  : "<<name<<endl;
	}
};

class order:public Person {
public:
	string item_name;
	int no_of_items;
	int delivery_time;
	void print(){
		cout<<"Who are you  :\n Enter your choice \n 1.you are admin \n 2.you are customer \n 3. you are waiter ";
	   cin>>n;
	   
	}
};
class items:public order{
	public:
		int i;
		int b;
		int se;
		void select(){
			cout<<"Select what type of items you have :\n 1.mobile items \n 2. motorbikes\n 3. Dresses  \n ";
			cin>>b;
			if(b=='1'){
				cout<<"--------------------------Mobile items----------------"<<endl;
				cout<<"Select your choice\n1. Huwavei  2. Nokia \n 3. oppo\n  4.Samsung \n 5.I-phone : ";
				cin>>se;
				if (se==1){
					cout<<"you want to buy 1.yes\n2.no";
			cin>>i;		
				}
				}
			}
		};
class payment:public items{
public:
	int p_method;
	int acc_no;
	string acc_type;
	int amount;
	void show(){
		if(i=='1'){
		
		cout<<"Enter your payment Method \n 1.Bank Account \n 2.Easypaisa \n 3. Jazzcash	";
		cin>>p_method;
		if(p_method==1){
			cout<<"Enter your account no : ";
			cin>>acc_no;
		}
		}
}
};
int main(){
	Person *p;
	order o;
	p=&o;
	p->log();
	o.print();
	items *it;
	payment py;
	it=&py;
	py.select();
	py.show();
}
