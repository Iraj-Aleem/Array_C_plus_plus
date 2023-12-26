//Ma'am	Arubah	Hussain
//Iraj	Aleem
//FA21-BCS-019
//DSA	Lab	Assigment	1	
//	Date:27-02-2023
#include<iostream>
using	namespace	std;
//Q2	
//Answer	2:
//				All	Functions	of	Question	2:
//Part	a	of	Question	2:
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

//Part	b	of	Question	2:
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

//Part	c	of	Question	2:
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
//Part	d	of	Question	2:
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
//			main	method	where	program	start	running
main()
{	
//Q2
//Part	a	&	b	Array:
int	a[5][6]	=	{{2,4,6,8,10,12},
				{1,2,3,4,5,56},
				{2,4,6,4,5,4},
				{1,2,3,5,6,8},
				{4,5,6,0,8,2}};
//Part	c	Array:
int	c[4][4]={		{0,1,2,3},
					{4,3,2,2},
					{8,6,5,4},
					{9,6,5,4}};
//Part	d	Array:
int	d[3][4]={		{0,9,90,3},
					{4,3,9,9},
					{8,6,5,4}
					
			}		;
//Q2	Functions	call
cout<<"Q2";
cout << "Part	a:	Smallest element in array: "<<smallestelement(a) << endl; 
cout << "Part	b:	Sum"<<sum(a)<<endl; 
cout << "Part	c:	Sum	of	4x4	array"<<sum_of_4X4_array(c)<<endl;
cout << "Part	d:	Sum	of	all	integers	in	the	row	1	and	column	2:"<<sum_of_all_integer(	d)<<endl;	

//----------------------------------------------------					

//					Question	no		3

//Program	of	Question	3:
int	array[3][4][2];
//Taking	input	values	from	user
for(int	i=0;i<3;i++){
	for(int	j=0;j<4;j++){
		
			for(int	k=0;k<2;k++)
			{
			
			cout<<"Enter	the	value	of	arr["<<i<<"]["<<j<<"]["<<k<<"]=";
			cin>>array[i][j][k];
		}
		
	}
}
cout<<endl;
//Displaying	the	values	of	the	array:
for(int	i=0;i<3;i++)
	{	
	for(int	j=0;j<4;j++){
	
		for(int	k=0;k<2;k++){
		cout<<"array["<<i<<"]["<<j<<"]["<<k<<"]="<<array[i][j][k]<<endl;
		
		}
}
}
//Print	even	values	of	an	array:

for(int	i=0;i<3;i++)
	{	
	for(int	j=0;j<4;j++){
	
		for(int	k=0;k<2;k++){
			if(array[i][j][k]%2==0){
				cout<"Even	values";
				cout<<"array["<<i<<"]["<<j<<"]["<<k<<"]="<<array[i][j][k]<<endl;
				
	}}
		}
}
//count	negative	values:
int	count=0;
for(int	i=0;i<3;i++)
	{	
	for(int	j=0;j<4;j++){
	
		for(int	k=0;k<2;k++){
			if(array[i][j][k]<0){
			
//				cout<<"array["<<i<<"]["<<j<<"]["<<k<<"]="<<array[i][j][k]<<endl;
				count++;
	}}
		}
}
cout<<"Counted	negative	values:"<<count<<endl;
//Finding	
//maximum	value:
int	max=array[0][0][0];
for(int	i=0;i<3;i++)
	{	
	for(int	j=0;j<4;j++){
	
		for(int	k=0;k<2;k++){
			if(array[i][j][k]>max){
				max=array[i][j][k];
				cout<<"array["<<i<<"]["<<j<<"]["<<k<<"]="<<array[i][j][k]<<endl;
			
	}
	
	}}}
	cout<<"Maximum	Value=";
	cout<<max;
	
//----------------------------------------------------

//Question	no	4:
float	avg=0.0;
int	f[2][4][3]={
{{2,3,4},{2,3,1},{5,8,6},{5,0,9}},
{{8,7,5},{9,9,0},{5,6,2},{25,5,3}}};
int	sum=0;
for(int	i=0;i<2;i++)
	{
	for(int	j=0;j<4;j++)
	{
			for(int	k=0;k<3;k++)
		{
			sum+=f[i][j][k];	
		}
	}
}
avg=sum/24;
cout<<"Average	of	Array="<<avg;

//----------------------------------------------------

//Question	no	1:
int	ar[4][2]={{0,9},{8,9},{100,9},{7,8}};
int	i,j;
//s	is	use	for	sum	and	ba	is	used	for	avg	:
	int	s;
	float	ba=0;
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

	s+=ar[i][j];
	ba=s/8;

	}

	cout<<"Q1";
	cout<<"Sum="<<s<<endl;
	cout<<"Average="<<ba;
	cout<<endl;
	for( i=0;i<4;i++){
		for(j=0;j<2;j++){
	if(ar[i][j]>ba)
		{
			
			above++;
		
		}
		}
		}
	cout<<"Values	above	average="<<above;

	for( i=0;i<4;i++){
		for(j=0;j<2;j++){
	if(ar[i][j]<ba)
		{
			below++;

		}}}
	cout<<endl;
	cout<<"Values	below	average=";
	cout<<below;
//----------------------------------------------------
}

