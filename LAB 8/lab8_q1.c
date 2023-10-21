#include<stdio.h>
void display(int*);
void min_max(int [],int);
int count(int [],int,int);
int main()
{
	int n;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	int marks[n+1];
	int i,val;
	for(i=0;i<n;i++)
	{
		printf("Enter marks of %d th student: ",i+1);
		scanf("%d",&val);
		marks[i]=val;
	
		
	}
	printf("\n List of marks:\n");
	int c=0;
	float tot=0;
	for(i=0;i<n;i++){
		display(&marks[i]);
		tot+=marks[i];
		c+=1;
		
	}
	float avg=(float)tot/c;
	min_max(marks,n);
	int x;
	x=count(marks,avg,n);
	printf("Number of student below avg: %d\n",x);
	
	int n1=0,n2=0,e=0,o=0;;

	for(i=0;i<n;i++){
		if(marks[i]%2==0)
		{
			e++;
		}		
	}
	o=n-e;
	n1=e;
	n2=o;
	int even[n1];
	int odd[n2];
	int t=0,u=0;
	for(i=0;i<n;i++){
		if(marks[i]%2==0)
		{
			even[t]=marks[i];
			t++;
		}
		else if(marks[i]%2!=0)
		{
			odd[u]=marks[i];
			u++;
		}
		
	}
	int p;
	printf("Even marks array:\n");
	for(p=0;p<n1;p++)
	{
		printf("%d\n",even[p]);
	}
	printf("\n");
	printf("Odd marks array:\n");
	for(p=0;p<n2;p++)
	{
		printf("%d\n",odd[p]);
	}
	
	
	int j,y,f;
	printf("Enter the position where you wish to insert element: ");
	scanf("%d",&y);
	printf("Enter the element: ");
	scanf("%d",&f);
	for(j=n+1;j>=x-1;j--)
	{
		marks[j]=marks[j-1];
	}
	
	marks[y-1]=f;
	printf("\nArray after insertion:-\n");
	for(p=0;p<n+1;p++)
	{
		printf("%d\n",marks[p]);
	}
	

	int a[n],k,b;
	for(i=0;i<n;i++)
	{
		a[i]=marks[i];
	}
    for(k=0;k<n;k++) 
    {
    	for(j=k+1;j<n;j++)
        {
        	if(a[k]>a[j]) 
            {
            	b=a[k];
                a[k]=a[j];
                a[j]=b;
			}
        }
    }
	
	
	int g,ind;
	printf("Enter the element to search: ");
	scanf("%d",&g);
	for(i=0;i<n;i++)
	{
		if(a[i]==g)
		{
			ind=i;
			
		}
		
	}
	if(ind>=0)
	{
		printf("\nThe element %d was found at %d th position",g,ind+1);
	}
	else
	{
		printf("\nThe element %d was not found in the list");
	}
	
	return 0; 
}


void display(int *a){
	
	printf("%d\n",*a);
}


void min_max(int a[],int b){
	int max,min,i;
	min=max=a[0];
    for(i=1; i<b; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
	printf("Maximum is %d\n",max);
	printf("Minimum is %d\n",min);	
}


int count(int d[],int m,int n){
	int j;
	int bc=0;
	for(j=0;j<n;j++)
	{
		if(d[j]<m)
		{
			bc+=1;
		}
	}
	return bc;
}


