#include<stdio.h>

#include<stdlib.h>

int main()

{
    
	int n,j=0,i=0,q,c=0,q1;
    
	scanf("%d",&n);
    
	int a[n];
    
	for(i=0;i<n;i++)
        
		scanf("%d",&a[i]);
    
	scanf("%d",&q1);
    
	while(j<q1)
    
	{
        
		scanf("%d",&q);
        
		for(i=0;i<n;i++)
        
		{
            
			if(q==a[i])
                
				c++;
        
		}
        
		if(c==0)
            
			printf("NOT PRESENT\n");
        
		else
            
			printf("%d\n",c);
        
		c=0;
        
		j++;
    
	}
    
	return 0;

}