# include<stdio.h>
#include<conio.h>
int rules(int x,int y,int z)
{
	int c;
	if((x==1 && y==1 && z==1)||(x==1 && y==0 && z==1)|| (x==0 && y==1 && z==1)|| (x==0 && y==0 && z==1))
		c=0;
	else if((x==1 && y==1 && z==0)||(x==1 && y==0 && z==0)|| (x==0 && y==1 && z==0))
		c=1;
	else 
		c=1;
	return c;	
}

int rules1(int x,int y,int z)
{
	int c;
	if((x==1 && y==1 && z==1)||(x==1 && y==1 && z==0)|| (x==0 && y==1 && z==1)|| (x==0 && y==1 && z==0))
		c=1;
	else if((x==1 && y==0 && z==1)||(x==1 && y==0 && z==0)|| (x==0 && y==0 && z==1))
		c=0;
	else 
		c=0;
	return c;	
}

int rules2(int x,int y,int z) 
{
	int c;
	if((x==1 && y==1 && z==1)||(x==1 && y==1 && z==0)|| (x==1 && y==0 && z==1)|| (x==1 && y==0 && z==0))
		c=1;
	else if((x==0 && y==1 && z==1)||(x==0 && y==1 && z==0)|| (x==0 && y==0 && z==1))
		c=0;
	else 
		c=0;
	return c;	
}





int rules3(int x,int y,int z)
{
	int c;
	if( (x==1 && y==0 && z==1)|| (x==1 && y==0 && z==0)||(x==0 && y==1 && z==1))
		c=1;
	else if((x==0 && y==0 && z==0)|| (x==0 && y==0 && z==1)||(x==1 && y==1 && z==1)||(x==1 && y==1 && z==0))
		c=0;
	else 
		c=1;
	return c;	
}


int rules4(int x,int y,int z)
{
	int c;
	if((x==1 && y==1 && z==0)|| (x==1 && y==0 && z==1)|| (x==0 && y==1 && z==0)|| (x==0 && y==0 && z==1))
		c=1;
	else if((x==0 && y==1 && z==1)||(x==0 && y==1 && z==0)||  (x==1 && y==1 && z==1))
		c=0;
	else 
		c=0;
	return c;	
}

int rules5(int x,int y,int z)
{
	int c;
	if((x==1 && y==1 && z==1)||(x==1 && y==0 && z==0)|| (x==0 && y==1 && z==1)||(x==0 && y==0 && z==0))
		c=1;
	 if((x==1 && y==1 && z==0)||(x==1 && y==0 && z==1)|| (x==0 && y==1 && z==0) || (x==0 && y==0 && z==1))
		c=0;
	
	return c;	
}

void rotate(int arr[], int n) 
{ 
   int x = arr[n-1], i; 
   for (i = n-1; i > 0; i--) 
      arr[i] = arr[i-1]; 
   arr[0] = x; 
} 

int main()
{
	int n,i,j,a[111],b[200],c[34],d[20], a1[111],b1[200],c1[34],d1[20],z[222],po;
	int cell[] = {0,0,0,1,0,0,1,1,1,1,0,1,1,0,0,1  };  
	int nextgen[100];
	int key1[100];
	int q[100],r[100],l=1,m=1,s[100],t[100], s1[100],t1[100] ,q1[100],r1[100],wq,z1[100];
	int key[]  =  {1,0,1,0,1,0,0,1,1,0,1,0,1,0,1,0,1,0,1,0};

	n= sizeof(cell)/4;
	printf("%d  The encrypted text  ",n);
	for(i=0;i<n;i++)
	printf("%d",cell[i]);
	
	for(po=1;po<=15;po++)
			{
		
			a[1]=key[0];
			a[2]=key[1];
			a[3]=key[2];
			a[4]=key[3];
			a[5]=key[4];
			b[1]=key[5];
			b[2]=key[6];
			b[3]=key[7];
			b[4]=key[8];
			b[5]=key[9];
			c[1]=key[10];
			c[2]=key[11];
			c[3]=key[12];
			c[4]=key[13];
			c[5]=key[14];
			d[1]=key[15];
			d[2]=key[16];
			d[3]=key[17];
			d[4]=key[18];
			d[5]=key[19];	
			
		
		 	
		 		for ( i = 1; i <=5; i++) {
				if (i==1)
				{
					int left   = a[5];
		  			int middle = a[i];
		 			int right  = a[i+1];
					a1[i] = rules3(left, middle, right); 
				}
				else if (i==5)
				{
					int left   = a[i-1];
		  			int middle = a[i];
		 			int right  = a[1];
		 		a1[i] = rules3(left, middle, right);
				}
				else
				{
					int left   = a[i-1];
		 	 		int middle = a[i];
		 	 		int right  = a[i+1];
		 	 		a1[i] = rules3(left, middle, right);
		 		}
			}
		
			
		 	
		 	
		 	
		 	
		 
		 	for ( i = 1; i <=5; i++) {
				if (i==1)
				{
					int left   = b[5];
		  			int middle = b[i];
		 			int right  = b[i+1];
					b1[i] = rules4(left, middle, right); 
				}
				else if (i==5)
				{
					int left   = b[i-1];
		  			int middle = b[i];
		 			int right  = b[1];
		 		b1[i] = rules4(left, middle, right);
				}
				else
				{
					int left   = b[i-1];
		 	 		int middle = b[i];
		 	 		int right  = b[i+1];
		 	 		b1[i] = rules4(left, middle, right);
		 		}
			}
			
		 	for ( i = 1; i <=5; i++) {
				if (i==1)
				{
					int left   = c[5];
		  			int middle = c[i];
		 			int right  = c[i+1];
					c1[i] = rules3(left, middle, right); 
				}
				else if (i==5)
				{
					int left   = c[i-1];
		  			int middle = c[i];
		 			int right  = c[1];
		 		c1[i] = rules3(left, middle, right);
				}
				else
				{
					int left   = c[i-1];
		 	 		int middle = c[i];
		 	 		int right  = c[i+1];
		 	 		c1[i] = rules3(left, middle, right);
		 		}
			}
			
		 	
		 	
		 	for ( i = 1; i <=5; i++) {
				if (i==1)
				{
					int left   = d[5];
		  			int middle = d[i];
		 			int right  = d[i+1];
					d1[i] = rules4(left, middle, right); 
				}
				else if (i==5)
				{
					int left   = d[i-1];
		  			int middle = d[i];
		 			int right  = d[1];
		 		d1[i] = rules4(left, middle, right);
				}
				else
				{
					int left   = d[i-1];
		 	 		int middle = d[i];
		 	 		int right  = d[i+1];
		 	 		d1[i] = rules4(left, middle, right);
		 		}
			}
		
		 	
		 	
		 	
		 	
		 
		 	
		 	
		 	for(j=1,i=1;i<=5;i++)
		 	{
		 		z[j]=a1[i];
		 		j++;
			 }
			
			for(j=6,i=1;i<=5;i++)
		 	{
		 		z[j]=b1[i];
		 		j++;
			 }	
			
			for(j=11,i=1;i<=5;i++)
		 	{
		 		z[j]=c1[i];
		 		j++;
			 }
			 
			for(j=16,i=1;i<=5;i++)
		 	{
		 		z[j]=d1[i];
		 		j++;
			 }			
					
				
		
			for(i=1;i<=20;i++)
				{
					key[i]=z[i];
				}
			
					
				for(i=1;i<=16;i++)
				{
					key1[i]=key[i];
				}
			
			
				
				for(j=1,i=0;i<n&& j<=16;i++,j++)
				{
					if (cell[i]==key1[j])
					cell[i]=0;
					else
					cell[i]=1;
				}	
			
			
			
			
			
			
				
				
		for ( i = 0; i <n; i++) {
		if (i==0)
		{
			int left   = cell[n-1];
  			int middle = cell[i];
 			int right  = cell[i+1];
			nextgen[i] = rules(left, middle, right); 
		}
		else if (i==n-1)
		{
			int left   = cell[i-1];
  			int middle = cell[i];
 			int right  = cell[0];
 			nextgen[i] = rules(left, middle, right);
		}
		else
		{
			int left   = cell[i-1];
 	 		int middle = cell[i];
 	 		int right  = cell[i+1];
 	 		nextgen[i] = rules(left, middle, right);
 		}
	}

 	
 
 	
 		for ( i = 0; i <n; i++) {
		if (i==0)
		{
			int left   = nextgen[n-1];
  			int middle = nextgen[i];
 			int right  = nextgen[i+1];
			cell[i] = rules1(left, middle, right); 
		}
		else if (i==n-1)
		{
			int left   = nextgen[i-1];
  			int middle = nextgen[i];
 			int right  = nextgen[0];
 			cell[i] = rules1(left, middle, right);
		}
		else
		{
			int left   = nextgen[i-1];
 	 		int middle = nextgen[i];
 	 		int right  = nextgen[i+1];
 	 		cell[i] = rules1(left, middle, right);
 		}
	}

 	
 		for ( i = 0; i <n; i++) {
		if (i==0)
		{
			int left   = cell[n-1];
  			int middle = cell[i];
 			int right  = cell[i+1];
			nextgen[i] = rules2(left, middle, right); 
		}
		else if (i==n-1)
		{
			int left   = cell[i-1];
  			int middle = cell[i];
 			int right  = cell[0];
 			nextgen[i] = rules2(left, middle, right);
		}
		else
		{
			int left   = cell[i-1];
 	 		int middle = cell[i];
 	 		int right  = cell[i+1];
 	 		nextgen[i] = rules2(left, middle, right);
 		}
	}

 	for(i=0;i<=n-1;i++)
		cell[i]=nextgen[i];
 	printf("\n");
	}
	
	
		q[1]=cell[0];
			q[2]=cell[1];
			q[3]=cell[2];
			q[4]=cell[3];
			
			r[1]=cell[4];
			r[2]=cell[5];
			r[3]=cell[6];
			r[4]=cell[7];
		
			s[1]=cell[8];
			s[2]=cell[9];
			s[3]=cell[10];
			s[4]=cell[11];
		
			t[1]=cell[12];
			t[2]=cell[13];
			t[3]=cell[14];
			t[4]=cell[15];
		
	
	for(wq=1;wq<=4;wq++)
		{
		
	
		for ( i = 1; i <=4; i++) {
		if (i==1)
		{
			int left   = 0;
  			int middle = q[i];
 			int right  = q[i+1];
			q1[i] = rules5(left, middle, right); 
		}
		else if (i==4)
		{
			int left   = q[i-1];
  			int middle = q[i];
 			int right  = 0;
 			q1[i] = rules5(left, middle, right);
		}
		else
		{
			int left   = q[i-1];
 	 		int middle = q[i];
 	 		int right  = q[i+1];
 	 		q1[i] = rules5(left, middle, right);
 		}
	}
	

	

	
	
 
	for(i=1;i<=4;i++)
				{
					q[i]=q1[i];
				}
 	
 	
 	
 	
	
	for(i=1;i<=4;i++)
	{
		if(r[i]==1)
		{
			r1[i]=0;
		}
		else
		r1[i]=1;
	}

	

	
	for(i=1;i<=4;i++)
				{
					r[i]=r1[i];
				}
 	
 	
 	
	
	
	
		for ( i = 1; i <=4; i++) {
		if (i==1)
		{
			int left   = 0;
  			int middle = s[i];
 			int right  = s[i+1];
			s1[i] = rules5(left, middle, right); 
		}
		else if (i==4)
		{
			int left   = s[i-1];
  			int middle = s[i];
 			int right  = 0;
 			s1[i] = rules5(left, middle, right);
		}
		else
		{
			int left   = s[i-1];
 	 		int middle = s[i];
 	 		int right  = s[i+1];
 	 		s1[i] = rules5(left, middle, right);
 		}
	}
	

	
	
	
	
 
	for(i=1;i<=4;i++)
				{
					s[i]=s1[i];
				}
 	
 	
 	
 	

	
		
	
		for(i=1;i<=4;i++)//rule 51
	{
		if(t[i]==1)
		{
			t1[i]=0;
		}
		else
		t1[i]=1;
	}

	

	
	for(i=1;i<=4;i++)
				{
					t[i]=t1[i];
				}
 	
 	
 	
	
	
	
}
	
	
for(j=0,i=1;i<=4;i++)
		 	{
		 		z1[j]=q[i];
		 		j++;
			 }
			
			for(j=4,i=1;i<=4;i++)
		 	{
		 		z1[j]=r[i];
		 		j++;
			 }	
			
			for(j=8,i=1;i<=4;i++)
		 	{
		 		z1[j]=s[i];
		 		j++;
			 }
			 
			for(j=12,i=1;i<=4;i++)
		 	{
		 		z1[j]=t[i];
		 		j++;
			 }	
			 
			 
			 	

		
		for(i=0;i<16;i++)
		{
		cell[i]=z1[i];
		}
		
	
	
	
	printf("the encrypted text");
	for(i=0;i<=n-1;i++)
		printf(" %d",cell[i]);
	
 }
