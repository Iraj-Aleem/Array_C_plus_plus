#include<iostream>
using	namespace	std;
#include<stdio.h>
#define	MAX	5

int	top=-1;
int	stack_arr[MAX];

push(){
	int	pushed_item;
	if(top==(MAX-1))
	cout<<"Stack	Overflow\n"<<endl;
	else{
		cout<<"Enter	the	item	to	be	pushed	in	stack:"<<endl;
		cin>>pushed_item;
		top=top+1;
		stack_arr[top]=pushed_item;
	}
}

pop(){
	if(top=-1)
		cout<<"Stack	Underflow\n"<<endl;
	else
	{
		cout<<"Popped	element	is:\n"<<stack_arr[top];
		top=top-1;
	}
}

display(){
	int	i;
	if(top==-1)
		cout<<"Stack	is	empty\n";
	else{
		cout<<"Stack	elements:\n";
		for(i=top;i>=0;i--)
			cout<<stack_arr[i]<<endl;
	}
}
//End	of	display
main(){
	int	choice;
	while(1){
		cout<<"1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.Display\n";
		cout<<"4.Quit\n";
		cout<<"Enter	your	choice:";
		cin>>choice;
		switch(choice){
			case	1:
				push();
				break;
			case	2:
				pop();
				break;
			case	3:
				display();
				break;
			case	4:
				exit(1);
				
		}
	}
	
}
