#include<iostream>
using namespace std ;
 class bank 
  {
  private:
 	int acc_no;
 	long int balance;
 	char name[30] ;
  public:
 	void open_account()
	{
  	 cout<<"Enter Account Holder's Name: ";
 	 cin >> name;
 	 cout<<"Enter Account Number:  ";
 	 cin >> acc_no;
 	 Deposit();
	}
 	void show_acc_details()
	{
	 cout<<"------------------------------------"<<endl;
 	 cout<<"ACC_NO: "<<acc_no<<endl;
 	 cout<<"ACC_HOLDER: "<<name<<endl;
 	 cout<<"ACC_BALANCE: "<<balance<<endl;
 	 cout<<"------------------------------------"<<endl;
	}
 	int get_accno()
 	{
 	return acc_no;
 	}	
 	void Deposit();
 	void Withdraw();
  };	
 int search_acc (int n,bank acc[])
  {   
 	int key,i,f=1;
 	cout<<"Enter the Acc_No: ";
 	cin>>key;
 	for (i=0;i<n;i++)
 	{
  	 if (key==acc[i].get_accno())
	 {
	 return i;
	 }
 	} 
	 if (f==1)
 	  return -1;
  }
 void bank::Deposit()
  {  
 	int a;
 	cout<<"Enter Total Ammount to be Deposited: ";
 	cin>>a;
 	balance+=a;
 	cout <<"Ammount of "<<a<<" Deposited Successfully"<<endl<<"Current Balance : "<<balance<<endl;
  }
 void bank::Withdraw()
  {
 	int a;
 	cout<<"Enter the Ammount to be Withdrawn : ";
 	cin>>a;
 	if(a>balance)
	 cout<<"ERROR:Insufficient Balance !!!"<<endl;
	else
 	{ 
	 balance=balance-a;
	 cout<<"Cash Ammount of "<<a<<" Withdrawn Successfully"<<endl;
 	}
  }
 int main()
 {
	int i,n,ch,x;
	cout<<"Enter number of Accounts:";
	cin>>n;
	bank acc[n];
	do
	{
 	cout<<endl<<"********* BANK MANAGEMENT SYSTEM **********"<<endl<<endl;
 	cout<<"1.-OPEN ACCOUNT"<<endl;
 	cout<<"2.-SEARCH ACCOUNT"<<endl;
 	cout<<"3.-SHOW ALL ACCOUNTS"<<endl;
 	cout<<"4.-DEPOSIT CASH"<<endl;
 	cout<<"5.-WITHDRAW CASH"<<endl;
 	cout<<"6.-QUIT"<<endl;
 	cout<<"\nENTER CHOICE: ";
 	cin>>ch;
 	switch(ch)
 	{ 
		case 1:
		{ 
	 	for (i=0;i<n;i++)
	 	 { 
		 cout<<"\n--------------------------------------------------------------------------------\n"; 	
	 	 acc[i].open_account();
	 	 cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
	 	 }
	 	 break;
		}
		case 2:
		{ 
		 x= search_acc(n,acc); 
		 if (x==-1)
		 cout<<"ERROR:Account Not Found !!!"<<endl;
		 else 
		 acc[x].show_acc_details();
		 break;
		} 
		case 3:
		{
	 	for (i=0;i<n;i++)
		 {			
		  cout<< "Account "<<i+1<<" Details :"<<endl;
		  acc[i].show_acc_details();
		 }
		  break;
		}
		case 4:
		{
	 	 x= search_acc(n,acc); 
	 	 if (x==-1)
			cout<<"ERROR:No Such Account Found !!!"<<endl;
		 else 
			acc[x].Deposit(); 
		 break;
		}
		case 5:
		{
	 	 x= search_acc(n,acc); 
	 	 if (x==-1)
	 	 { 
	 	  cout<<"ERROR:No Such Account Found !!!"<<endl;
	 	  break;
	 	 }
	 	 else 
	 	  acc[x].Withdraw();
	 	break;
		}
		case 6:
		{	
	 	 exit(0);
		 break;
		}
		default :
		{  
	 	 cout<<"ERROR:Provide Appropriate Input !!!";
		}	
 	}
	}
	while(1);
   return 0;
 } 
