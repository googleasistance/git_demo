#include<iostream.h>
#include<conio.h>
class shape
{
	private:
		int height,length;
	public:
		void getd()
		{
			cout<<"\n\t Enter Height:";
			cin>>height;
			cout<<"\n\t Enter Length:";
			cin>>length;
		}
		void putd()
		{
			cout<<"\n\t Height:"<<height;
			cout<<"\n\t Length:"<<length;
		}
};
class ract : public shape
{
	public:
		void display()
		{
			cout<<"\n\t it is inheritance of shape class....";
		}
};
void main()
{
	clrscr();
	ract obj;
	obj.getd();
	obj.putd();
	obj.display();
	getch();

}

