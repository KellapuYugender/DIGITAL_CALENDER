#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
  
  int main()
{
    int i,j;
    int d=1000;
    int month,year,flag,D;
    
    system("color 4F");  
             
printf("ENTER THE DATE,MONTH_NUMBER AND YEAR:\n");
scanf("%d %d %d",&D,&month,&year);

 while(year)
{   
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
         flag=1;
  
    
    if(month>12)  
     {
         printf("*****ERROR*****\n");
         exit(0);
    
    }
    
    else   
     
    {
      while(month<=12)
       {
        switch(month)
        {
            case 1:
                     
                     for(j=D;j<=31;j++)
                     {  
                          printf("***JANUARY***\n");
                          printf("\nDATE  %d-%d-%d\n",j,month,year);
                           
                           
                          Sleep(d);
                          system("cls");
                     }
                       D=1;
                     break;
                
           
             case 2: 
                     if(flag==1)  
                      {  
                          for(j=D;j<=29;j++)
                      {
                         
                          printf("***FEBRUARY***\n");
                          printf("\nDATE  %d-%d-%d\n",j,month,year);
                          Sleep(d);
                          system("cls");

                      }
                       D=1;
                      flag=0;
                      break; 
                      }
                      else
                      {
                      for(j=D;j<=28;j++)
                      {
                         
                          printf("***FEBRUARY***\n");
                          printf("\nDATE  %d-%d-%d\n",j,month,year);
                          Sleep(d);
                          system("cls");

                      }
                      D=1;
                      break; 
                      }
             case 3: 
                      for(j=D;j<=31;j++)
                      {  
                         printf("***MARCH***\n");
                         printf("\nDATE  %d-%d-%d\n",j,month,year);
                         Sleep(d);
                         system("cls");

                      
                      }
                       D=1;
                      break; 
              case 4: 
                       for(j=D;j<=30;j++)
                       {
                         printf("***APRIL***\n");
                         printf("\nDATE  %d-%d-%d\n",j,month,year);
                         Sleep(d);
                         system("cls");

                       }
                        D=1;
                       break;

               case 5: 
                        for(j=D;j<=31;j++)
                        {
                            printf("***MAY***\n");
                            printf("\nDATE  %d-%d-%d\n",j,month,year);
                            Sleep(d);
                            system("cls");

                        }
                         D=1;
                        break;
               case 6: 
                        for(j=D;j<=30;j++)
                        {   
                            printf("***JUNE***\n");
                            printf("\nDATE  %d-%d-%d\n",j,month,year);
                            Sleep(d);
                            system("cls");

                         }
                        D=1;
                        break;
               case 7: 
                        for(j=D;j<=31;j++)
                        {   
                            printf("***JULY***\n");
                            printf("\nDATE  %d-%d-%d\n",j,month,year);
                            Sleep(d);
                            system("cls");

                         }
                         D=1;
                        break;
               case 8: 
                        for(j=D;j<=31;j++)
                        {
                            printf("***AUGUST***\n");
                            printf("\nDATE  %d-%d-%d\n",j,month,year);
                            Sleep(d);
                            system("cls");

                        }
                         D=1;
                        break;
                case 9: 
                         for(j=D;j<=30;j++)
                         {
                             printf("***SEPTEMBER***\n");
                             printf("\nDATE  %d-%d-%d\n",j,month,year);
                             Sleep(d);
                             system("cls");

                         }
                          D=1;
                         break;
                 case 10:
                          for(j=D;j<=31;j++)
                          {
                             printf("***OCTOBER***\n");
                             printf("\nDATE  %d-%d-%d\n",j,month,year);
                             Sleep(d);
                             system("cls");

                          }
                           D=1;
                          break;
                  case 11:
                        for(j=D;j<=30;j++)
                         {   
                             printf("***NOVEMBER***\n");
                             printf("\nDATE  %d-%d-%d\n",j,month,year);
                             Sleep(d); 
                             system("cls");

                          }
                          D=1;
                          break;
                   case 12:
                         for(j=D;j<=31;j++)
                         {  
                             printf("***DECEMBER***\n");
                             printf("\nDATE  %d-%d-%d\n",j,month,year);
                             Sleep(d);     
                             system("cls");

                         }
                         D=1;
                         break; 
                          

                   default:
                    {
                        printf("\n");
                       }


         }
            
             month++;
               
       
       }
              
    }          
               month=1;
               year++;
               printf("***NEW YEAR***\n");
               printf("**** %d ****\n",year);
    }  
    getch();

}
