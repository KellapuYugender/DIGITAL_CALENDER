#include<stdio.h>

void insert(int a[20],int n,int pos,int elet)
{
    int i,j=n-1;
    
    
    for(i=0;i<n;i++)
    {   
        while (j>=pos-1)
        {   
            a[j+1]=a[j];

            j--;
        }
        if(i==pos-1)
         {   
             a[i]=elet;
             break;
        }

    }
    printf("\nTHE INSERTED ARRAY IS...:\n");
      for(i=0;i<=n;i++)
     {
        printf("%d\n",a[i]);
       }

}
 
void delete(int a[10],int n,int pos)
{  
    
    int i,j=pos;
    
    for(i=0;i<n;i++)
    {  
      if(i==pos-1)
       {
           a[i]=a[i]-a[i];
           
       }
       while ((j>pos-1)&&(j<=n-1)&&(i==pos-1))
        {   
            a[j-1]=a[j];

            j++;
        }

    }
    printf("\nTHE DELETED ARRAY IS....:\n");
      for(i=0;i<n-1;i++)
     {
        printf("%d\n",a[i]);
       }
    
}

void reverse(int a[10],int n)
{
    
    int i,j;
    
    printf("\nTHE REVERSED ARRAY IS....:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
  
}
int main()
{
     int i,j;
     int a[10];
     int elet,pos,n;
     int ch,opt;
     printf("\nENTER THE LIMIT :");
     scanf("%d",&n);
     
     printf("\nENTER THE ELEMENTS OF ARRAY :\n");
      for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
       }

  do
  {
    printf("\nENTER NO.1 FOR INSERTION, NO.2 FOR DELETION, NO.3 FOR REVERSE:\n");
    scanf("%d",&ch);
switch(ch)
 {

case 1:
    printf("\n ENTER THE ELEMENT TO INSERT:");
     scanf("%d",&elet);
    
    printf("\nENTER THE POSTION OF INSERTING ELEMENT:");
     scanf("%d",&pos);
 
    insert(a,n,pos,elet);
     break;

 case 2:
      printf("\nENTER THE POSITION:");
      scanf("%d",&pos);
       
      delete(a,n,pos); 
       break;
  case 3:
         
         reverse(a,n);
         break;
  
  default:
  {
      printf("INVALID NUMBER\n");
  }
}
printf("IF YOU WANT TO CONTINUE...\n");
printf("THEN ENTER 1 FOR'YES' AND 2 FOR 'NO'...\n");
scanf("%d",&opt);
}while (opt!=2);
  
  return 0;

}
