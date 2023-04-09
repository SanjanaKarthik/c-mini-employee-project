#include<iostream>
#include "header/Employee.h"
int main()
{
	int ch,n,ele,f;
	cout<<"\n enter n ele=";
	cin>>n;
	Employee e[n];
	cout<<"\n inserting ele.....\n=";
	for(int i=0;i<n;i++)
	e[i].setData();
	
	do
	{
		cout<<"\n 1. display selected emp\n 2. display all";
		cout<<"\n 3.______ \n 4. exit";
		cout<<"\n Enter choice=";
		cin>>ch;
		switch(ch)
		{
			case 1:	cout<<"\n enter empid to search";
			cin>>ele;
			for(int i=0;i<n;i++)
			{
				if (e[i].getId()==ele)
				{
					f=0;
         	       e[i].display();
         }
		}
		if(f==1)
		cout<<"\n emp does not exit";
		break;
		
	case 2: cout<<"\n all records \n";
	        for (int i=0;i<n;i++)
	        e[i].display();
	        break;
	case 4:break;
	default:cout<<"\n invalid\n";
	}
}while(ch!=4);
}

