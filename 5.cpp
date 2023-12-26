
							//2
#include<iostream>
using	namespace	std;
main()
{
	int	a[5][6]={{0,2,3,4,56,5},{2,4,8,4,5,4},{0,1,4,7,28,8},{5,7,1,5,4,7},{285,7,87,58,5,8}}
}

int	smallest(int	a[5][6]){
	for(int	i=0;i<5;i++)
	for(int	j=0;j<6;j++)
	{
	if(a[i][j]<a[0][0])
	{
		smallest=a[i][j];
	}
	}
	return	smallest;
}

