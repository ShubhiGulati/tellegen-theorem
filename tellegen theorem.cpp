#include<iostream>
using namespace std;
int main()
{
	int E,R1,R2,R3,R4;
	int i,j,k,l;
	cout<<" my project is on tellegen theorem which states that \n \t 'power(input)=power(output)'";
	cout<<"\n\n\n\n";
for( i=1;i<=16;i++)
{
	for(j=1;j<=16;j++)
	{
	if((i==1||i==16||j==i||j==1||j==16)&&j!=8&&i!=8&&j!=5)
	cout<<"--";
	else if (i==8&&j==1)
	cout<<" E";
	else if(i==1&&j==5)
	cout<<"R1";
	else if(i==8&&j==8)
	cout<<" R2";
	else if(i==16&&j==5)
	cout<<"R3";
	else if(i==8&&j==16)
	cout<<"R4";
	else if(i==5&&j==5)
	cout<<"--";
	else if(i==16&&j==8||j==8&&i==1)
	cout<<"--";
	else
	cout<<" ";
}
cout<<"\n";
}
cout<<"\n\n enter the values of all given variables \n\n";
cout<<" enter value of E "<<endl;
cin>>E;
cout<<" enter value of R1"<<endl;
cin>>R1;
cout<<" enter value of R2"<<endl;
cin>>R2;
cout<<" enter value of R3"<<endl;
cin>>R3;
cout<<" enter value of R4"<<endl;
cin>>R4;
//calculating values
int I1,I2;
I1=(E*R1+E*R2+E*R4)/(R1*R2+R2*R3+R3*R4+R1*R3+R2*R4);
cout<<"Value of I1 "<<endl<<I1 <<" A"<<endl;
I2=(E*R2)/(R1*R2+R2*R3+R3*R4+R1*R3+R2*R4);
cout<<"Value of I2 "<<endl<<I2<<" A"<<endl;
int P1,P2,P3,P4;
int V1,V2,V3,V4;
/*V1=R1*I2;
V2=(I1-I2)*R2;
V3=R3*I1;
V4=R4*I2;*/
P1=I2*I2*R1;
P2=(I1-I2)*(I1-I2)*R2;
P3=R3*I1*I1;
P4=R4*I2*I2;
int P_input,P_output;
P_output=P1+P2+P3+P4;
cout<<"output power is:  "<<P_output<<"W"<<endl;
int R_eq,I_eq;
R_eq=(R1*R2+R1*R3+R1*R4+R2*R4+R2*R3)/(R2+R3+R4);
I_eq=E/R_eq;
P_input=E*I_eq;
cout<<"input power is:  "<<P_input<<"W"<<endl;
if(P_input==P_output)
cout<<"TELLEGEN THEOREM IS VERIFIED";
else 
cout<<" TELLEGEN THEOREM IS NOT VERIFIED";
 return(0);
  }

