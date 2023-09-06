//CAFE MANAGEMENT SYSTEM
#include<iostream> //for input output operation
#include<string.h> //For take input as string
#include<fstream>	//for file operations
using namespace std;
class menu{			//base class
	protected:
		string key,no,nm;	//	protected data members
	public:
		menu() //constructor
			{
				cout<<"\t\t\t\t== STARBUCKS =="; 
				cout<<"\n\nWELCOME TO STARBUCKS COFFEE"; 
				cout<<"\n\nENTER 'A' KEY FOR MENU CARD \n";
				cin>>key;
				system("cls");
				cout<<"\n\n\t\t\t\t>> MENU <<";
				cout<<"\n\t\t--------------------------------------------";
				cout<<"\n\t\t| Item no.| Iteam Name |  Price  | In Stock |";
				cout<<"\n\t\t--------------------------------------------";
				cout<<"\n\t\t|    1    |  Americano |  120.23 |    23    |";
				cout<<"\n\t\t--------------------------------------------";
				cout<<"\n\t\t|    2    |    Latte   |  100.67 |    13    |";
				cout<<"\n\t\t--------------------------------------------";
				cout<<"\n\t\t|    3    | Cappuccino |  720.83 |     8    |";
				cout<<"\n\t\t--------------------------------------------";
				cout<<"\n\t\t|    4    |  Espresso  |  70.23  |    46    |";
				cout<<"\n\t\t--------------------------------------------";
				cout<<"\n\t\t|    5    |    Irish   |  70.23  |    46    |";
				cout<<"\n\t\t--------------------------------------------";
				cout<<"\n\t\t|    6    |  Affogato  |  60.23  |    34    |";
				cout<<"\n\t\t--------------------------------------------";
				cout<<"\n\t\t|    7    | Mochachino |  520.29 |     7    |";	
				cout<<"\n\nPLACE YOUR ORDER:-";
				cout<<"\n\nENTER 'A' KEY FOR PLACING ORDER.... \n";
				cin>>key;
				system("cls");
			}
			~menu()	//Destructor
			{	
			}
			void getname() //Normal Function
			{
				cout<<"ENTER YOUR NAME :";
				cin>>nm;
				cout<<"ENTER YOUR PHONE NUMBER :";
				cin>>no;
			}
			friend void putname(menu m); //Friend Function Declaration
};
void putname(menu m) //Friend Function Defination with arugument as object
{
	cout<<"\n\nYOUR NAME :"<<m.nm;
	cout<<"\nPHONE NUMBER :"<<m.no<<"\n";
	cout<<"\n\t\t--------------------------------------------";
	cout<<"\n\t\t| Item no.| Iteam Name |  Price  | In Stock |";
	cout<<"\n\t\t--------------------------------------------";
	
	fstream f;	//File object
	f.open("File.txt",ios::out);	//Opening a file
	f<<"\t\t\t\t== STARBUCKS COFFEE =="; 	//	write in a file
	f<<"\n\nWELCOME TO STARBUCKS COFFEE"; 
	f<<"\n\nName = "<<m.nm;
	f<<"\nPhone Number ="<<m.no;
	f<<"\n\t\t\t\t----Your Order ----";
	f.close();		//closing a file
}
class item{		//class item
	public:
		string itemn;
		float q;
	public:
		void getdata()
		{
			cout<<"\nENTER ITEM NO :";
			cin>>itemn;
			cout<<"ENTER ITEM QUANTITY :";
			cin>>q;
		}
		 void putdata();	//function declartion
		 void confirm();	//function declartion
};
void item::putdata()	//function defination using scope resolution
{		
	float am;
	fstream f;
	f.open("file.txt",ios::app);
	f<<"\n\t\t--------------------------------------------";
	if(itemn=="1")
	{
		cout<<"\n\t\t|    1    |  Americano |  120.23 |    23    |";
		cout<<"\n\t\t--------------------------------------------";
		f<<"\n\t\t|    1    |  Americano |  120.23 |    23    |";
		f<<"\n\t\t--------------------------------------------";
		am=120.23*q;
		f<<"\n\nAmount :"<<am;
	}
	else if(itemn=="2")
	{
		cout<<"\n\t\t|    2    |    Latte   |  100.67 |    13    |";
		cout<<"\n\t\t--------------------------------------------";
		f<<"\n\t\t|    2    |    Latte   |  100.67 |    13    |";
		f<<"\n\t\t--------------------------------------------";
		am=100.67*q;
		f<<"\n\nAmount :"<<am;
	}
	else if(itemn=="3")
	{
		cout<<"\n\t\t|    3    | Cappuccino |  720.83 |     8    |";
		cout<<"\n\t\t--------------------------------------------";
		f<<"\n\t\t|    3    | Cappuccino |  720.83 |     8    |";
		f<<"\n\t\t--------------------------------------------";
		am=720.83*q;
		f<<"\n\nAmount :"<<am;
	}
	else if(itemn=="4")
	{
		cout<<"\n\t\t|    4    |  Espresso  |  70.23  |    46    |";
		cout<<"\n\t\t--------------------------------------------";
		f<<"\n\t\t|    4    |  Espresso  |  70.23  |    46    |";
		f<<"\n\t\t--------------------------------------------";
		am=70.23*q;
		f<<"\n\nAmount :"<<am;
	}
	else if(itemn=="5")
	{
		cout<<"\n\t\t|    5    |    Irish   |  70.23  |    46    |";
		cout<<"\n\t\t--------------------------------------------";
		f<<"\n\t\t|    5    |    Irish   |  70.23  |    46    |";
		f<<"\n\t\t--------------------------------------------";
		am=70.23*q;
		f<<"\n\nAmount :"<<am;
	}
	else if(itemn=="6")
	{
		cout<<"\n\t\t|    6    |  Affogato  |  60.23  |    34    |";
		cout<<"\n\t\t--------------------------------------------";
		f<<"\n\t\t|    6    |  Affogato  |  60.23  |    34    |";
		f<<"\n\t\t--------------------------------------------";
		am=60.23*q;
		f<<"\n\nAmount :"<<am;
	}
	else if(itemn=="7")
	{
		cout<<"\n\t\t|    7    | Mochachino |  520.29 |     7    |";	
		cout<<"\n\t\t--------------------------------------------";
		f<<"\n\t\t|    7    | Mochachino |  520.29 |     7    |";	
		f<<"\n\t\t--------------------------------------------";
		am=60.23*q;
		f<<"\n\nAmount :"<<am;
	}	
	else
	{
		cout<<"\n\nItem not found";
	}
}
void item::confirm()	//function defination using scope resolution
{
	char x;
			cout<<"\n\nCONFIRM YOUR ORDER...";
			cout<<"\n\nADD ORDER(y/n) :";
			cin>>x;
			if(x=='y')
			{
				system("cls");
				getdata();
				cout<<"\n\t\t--------------------------------------------";
				cout<<"\n\t\t| Item no.| Iteam Name |  Price  | In Stock |";
				cout<<"\n\t\t--------------------------------------------";
				putdata();
				confirm();
			}
			else if(x=='n')
			{	
				system("cls");
				cout<<"\n\nYOUR ORDER WILL GET READY SOON...";
				cout<<"\n\nTHANKS FOR CHOOSING STARBUCKS COFFEE...";
			}	
			else
			{				
				system("cls");
				cout<<"\nPLEASE ENTER VALID INPUT";
				confirm();
			}
}
int main()
{	
	menu m; //Constructor calling
	m.getname();//NormalFunction calling
	int n,i;
	item t[50];
	cout<<"\n\nHOW MANY ITEMS YOU WANT TO ORDER :";
	cin>>n;
	for(i=0;i<n;i++)
	{
		t[i].getdata();	//member function callin using array
	}
	putname(m);//Friend Function Calling
	for(i=0;i<n;i++)
	{	
		t[i].putdata();	//member function callin using array
	}
	t[i].confirm();	
	fstream f;	//File object
	f.open("file.txt",ios::app);	//opening a file in append mode 
	f<<"\n\n\nTHANKS FOR YOUR ORDER";	//writing in a file
	f<<"\n\nCOME AND VISIT AGAIN";
	f.close();	//closing a file
}
