
#include<iostream>
#include<conio.h>
using	namespace	std;
main(){
int	ar[4][2]={{0,9},{8,9},{100,9},{7,8}};
int	i,j;
	int	sum;
	int	avg=0;
	int above=0;
	int below=0;
	for(int	i=0;i<4;i++)
	{	
	for(int	j=0;j<2;j++)
		if(ar[i][j]<=100)
		cout<<ar[i][j]<<"\t";
	cout<<endl;
}	
	for(int	i=0;i<4;i++)
	for(int	j=0;j<2;j++)
	{

	sum+=ar[i][j];
	avg=sum/8;

	}
	cout<<"Sum="<<sum<<endl;
	cout<<"Average="<<avg;
	cout<<endl;
	for( i=0;i<4;i++){
		for(j=0;j<2;j++){
	if(ar[i][j]>avg)
		{
			
			above++;
		
		}
		}
		}
	cout<<"Values	above	average="<<above;

	for( i=0;i<4;i++){
		for(j=0;j<2;j++){
	if(ar[i][j]<avg)
		{
			below++;

		}}}
	cout<<endl;
	cout<<"Values	below	average=";
	cout<<below;
	getch();
}

//Q2
//#include<iostream>
//using	namespace	std;
//Part	a:
int	smallestelement(int	a[5][6]){
	int	smallest=a[0][0];
	for(int	i=0;i<5;i++){
		for(int	j=0;j<6;j++)
		{
			if(a[i][j]<smallest){
				smallest=a[i][j];

		}
	}
	}
	return	smallest;
}
//Part	b:
int	sum(int	a[5][6]){
int	sum=0;
	for(int	i=0;i<5;i++){
		for(int	j=0;j<6;j++)
		{
			sum=sum+a[i][j];
		}
}
	return	sum;	
}
//Part	c:
int	sum_of_4X4_array(int	c[4][4])
{
	int	sum=0;
	for(int	i=0;i<4;i++){
			if(c[i][i]!=0){
			sum+=c[i][i];
		}
	}
	return	sum;
	
}
int	sum_of_all_integer(int	d[3][4]){
	int	sum=0;
	for(int	i=0;i<3;i++){
		if(i==0){
		for(int	j=0;j<4;j++){
			if(j==2){
			
				sum+=d[i][j];
		}
		}
		}
	}
	return	sum;
}

