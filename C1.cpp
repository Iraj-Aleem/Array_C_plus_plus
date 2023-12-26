#include<stdio.h>
#include<iostream>
using	namespace	std;
main(){
//	Example	1:
	int	a=5;
	printf("Example	1:");
	printf("Value	if	a=%d\n",a);
	printf("address	of	a=%u\n",&a);
	cout<<"Value	of	a="<<a;
	cout<<"\nAddress	of	a="<<&a;
//	Example	2:
printf("\nExample	2:");
int	b=5;
printf("\nvalue	of	a	=%d\n",a);
printf("address	of	a=%u\n",&a);
printf("value	at	address	%u=%d\n",&a,*(&a));
cout<<"value	of	a	="<<a;
cout<<"\naddress	of	a="<<&a;
cout<<"\nvalue	at	address"<<&a<<"\t"<<*(&a);
//	Example	3:
printf("Example	3:");
int	c=5;
int	*d;
d=&c;
printf("Value	of	c	=%d\n",c);
printf("Value	of	c=%d\n,",*(&c));
printf("Value	of	c=%d\n",*d);
printf("Address	of	d	=%u\n",&c);
printf("Address	of	d=%u\n",d);
printf("Address	of	d=%u\n",&d);
printf("Value	of	d	=address	of	c=%u\n",d);
cout<<"Value	of	c="<<c<<endl;
cout<<"Value	of	c="<<*(&c)<<endl;
cout<<"Value	of	c="<<*d<<endl;
cout<<"Address	of	d	="<<&c<<endl;
cout<<"Address	of	d	="<<d<<endl;
cout<<"Address	of	d	="<<&d<<endl;

//	Example	4:
char	e='p';
char	*e1;
int	f=5;
int	*f1;
float	g=5.5;
float	*g1;
e1=&e;
f1=&f;
g1=&g;
printf("value	of	e=%c\n",e);
printf("value	of	e=%c\n",*(&e));
printf("value	of	e=%c\n",*e1);
printf("value	of	f=%d\n",f);
printf("value	of	f=%d\n",*(&f));
printf("value	of	f=%d\n",*f1);
printf("value	of	g=%f\n",g);
printf("value	of	g=%f\n",*(&g));
printf("value	of	g=%f\n",*g1);
printf("value	of	e=%u\n",e1);
printf("value	of	f=%u\n",(f1));
printf("value	of	g=%u\n",g1);

cout<<""<<e<<endl;
cout<<""<<*&e<<endl;
cout<<""<<*e1<<endl;
cout<<""<<f<<endl;
cout<<""<<*(&f)<<endl;
cout<<""<<*f1<<endl;
cout<<""<<g<<endl;
cout<<""<<*(&g)<<endl;
cout<<""<<*g1<<endl;
cout<<""<<e1<<endl;
cout<<""<<f1<<endl;
cout<<""<<g1<<endl;
//cout<<""<<e<<endl;
//cout<<""<<*(&e)<<endl;

//Example	5:
int	h=5;
int	*i;
int	**j;
int	*k;
k=&h;
i=&h;
j=&i;
printf("value	of	a=%d\n",h);
printf("value	of	a=%d\n",*(&h));
printf("value	of	a=%d\n",*i);
printf("value	of	a=%d\n",**j);
printf("value	of	a=address	of	b=%u\n",k);
printf("value	of	b=address	of	a=%u\n",i);
printf("value	of	c=address	of	b=%u\n",j);





}
