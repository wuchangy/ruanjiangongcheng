#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class shu
{
	double a,b;
public:
	shu(double x,double y):a(x),b(y){}
	void add()
	{
		cout<<"="<<(a+b)<<endl;
		//system("pause");
	}
	void jian()
	{
		cout<<"="<<(a-b)<<endl;
		//system("pause");
	}
	void cheng()
	{
		cout<<"="<<(a*b)<<endl;
		//system("pause");
	}
	void chu()
	{
		cout<<"="<<a/b<<endl;
		//system("pause");
	}
	void fang()
	{
		cout<<"="<<pow(a,b)<<endl;
		//system("pause");
	}
	void si()
	{
		cout<<"="<<sin((b*3.1415926)/180)<<endl;
	}
	void co()
	{
		cout<<"="<<cos((b*3.1415926)/180)<<endl;
	}
	void ta()
	{
		cout<<"="<<tan((b*3.1415926)/180)<<endl;	
	}
	void k()
	{
		cout<<"="<<pow(a,b)<<endl;
	}
	void e()
	{
		int z=b,i;
		double x[1000];
		for(i=0;z!=0;x[i]=z%2,z=z/2,i++)
		{}
		for(i--;i>=0;i--)
			cout<<x[i];
	}
	void ba()
	{
		int z=b,i;
		double x[1000];
		for(i=0;z!=0;x[i]=z%8,z=z/8,i++)
		{}
		for(i--;i>=0;i--)
			cout<<x[i];
	}
	void l()
	{
		int z=b,i;
		double x[1000];
		for(i=0;z!=0;x[i]=z%16,z=z/16,i++)
		{}
		for(i--;i>=0;i--)
		{
			if(x[i]<10)
				cout<<x[i];
			else if(x[i]==10)
				cout<<"A";
			else if(x[i]==11)
				cout<<"B";
			else if(x[i]==12)
				cout<<"C";
			else if(x[i]==13)
				cout<<"D";
			else if(x[i]==14)
				cout<<"E";
			else if(x[i]==15)
				cout<<"F";
		}
	}
};
int main()
{
	int i;
	char z[100],c;
	double x[100],y[100];
	for( ; ;)     //ѭ��ִ�й��ܲ˵�
	{
		cout<<"                                   *****************************"<<endl;
		cout<<"                                   ********   ������� +     ***"<<endl;
		cout<<"                                   ********   ������� -     ***"<<endl;
		cout<<"                                   ********   ������� *     ***"<<endl;
		cout<<"                                   ********   ������� /     ***"<<endl;
		cout<<"                                   ********  �˷������ ^    ***"<<endl;
		cout<<"                                   ********  sin����� s     ***"<<endl;
		cout<<"                                   ********  cos����� c     ***"<<endl;
		cout<<"                                   ********  tan����� t     ***"<<endl;
		cout<<"                                   ********  ��������� k    ***"<<endl;
		cout<<"                                   ******** ת����������� e ***"<<endl;
		cout<<"                                   ******** ת�˽�������� b ***"<<endl;
		cout<<"                                   ********תʮ����������� l***"<<endl;
		cout<<"��������������0  "<<endl;
		cout<<"�������һ����:  ";cin>>x[0];
		if(x[0]!=0)
		{
			cout<<"������������������'#'����������"<<endl;
			for(i=0;;i++)
			{
				
				cout<<"���������������һ������'=';";cin>>z[i]>>y[i]>>c;
				if(z[i]!='#')
				{	
					shu a(x[0],y[i]);
					switch(z[i])
					{
						case '+': a.add();x[0]=x[0]+y[i];break;
						case '-': a.jian();x[0]=x[0]-y[i];break;
						case '*': a.cheng();x[0]=x[0]*y[i];break;
						case '/': a.chu();x[0]=x[0]/y[i];break;
						case '^': a.fang();x[0]=pow(x[0],y[i]);break;
						case 's': a.si();break;
						case 'c': a.co();break;
						case 't': a.ta();break;
						case 'k': a.k();break;
						case 'e': a.e();break;
						case 'b': a.ba();break;
						case 'l': a.l();break;
					}
				}
				else 
					break;
			}
			system("cls");
		}
		else
			break;
	}
}

