#include<stdio.h>

void main()

{
    
	int n,a,i=0,t;
    
	scanf("%d%d",&n,&a);

    	int s[n];

    	for(int j=0;j<n;j++)
        
	scanf("%d",&s[j]);
    
	while(i<a)
    
	{
        
		t=s[0];
        
		for(int j=0;j<n;j++)
        
		{
            
			s[j]=s[j+1];
        
		}
        
		s[n-1]=t;
        
		i++;
    
	}
    
	for(int j=0;j<n;j++)
        
	printf("%d ",s[j]);

}