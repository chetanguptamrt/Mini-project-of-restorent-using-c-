#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int ch,sum=0,price[7],u=1,i,ord[100]={0},o=0;
 cout<<"Enter the price of food respectively:-\n\n";
 cout<<"Tea\tCoffee\tSalad\tChapati\tRice\tLentils\tFruit\n";
 for(i=0;i<7;i++)
  cin>>price[i];
 while(1)
 {
  clrscr();
  cout<<"WELCOME\tuser="<<u<<"\ttotal ammount = "<<sum<<"\n";
  cout<<"Press 1 for Tea\t\t"<<price[0];
  cout<<"\nPress 2 for Coffee\t"<<price[1];
  cout<<"\nPress 3 for Salad\t"<<price[2];
  cout<<"\nPress 4 for Chapati\t"<<price[3];
  cout<<"\nPress 5 for Rice\t"<<price[4];
  cout<<"\nPress 6 for Lentils\t"<<price[5];
  cout<<"\nPress 7 for Fruit\t"<<price[6];
  cout<<"\nPress 8 for new customer";
  cout<<"\nPress 9 for exit";
  cout<<"\n\nyour order is ";
  for(i=1;i<=o;i++)
   cout<<ord[i-1]<<",";
  cout<<"\n\n\nYour Choice - ";
  cin>>ch;
  switch(ch)
  {
   case 1:
   {
    ord[o]=ch;
    o++;
    sum=sum+price[ch-1];
    break;
   }
   case 2:
   {
    ord[o]=ch;
    o++;
    sum=sum+price[ch-1];
    break;
   }
   case 3:
   {
    ord[o]=ch;
    o++;
    sum=sum+price[ch-1];
    break;
   }
   case 4:
   {
    ord[o]=ch;
    o++;
    sum=sum+price[ch-1];
    break;
   }
   case 5:
   {
    ord[o]=ch;
    o++;
    sum=sum+price[ch-1];
    break;
   }
   case 6:
   {
    ord[o]=ch;
    o++;
    sum=sum+price[ch-1];
    break;
   }
   case 7:
   {
    ord[o]=ch;
    o++;
    sum=sum+price[ch-1];
    break;
   }
   case 8:
   {
    sum=0;
    u++;
    o=0;
    break;
   }
   case 9:
   {
    goto exit_loop;
   }
   defult:
   {
    break;
   }
  }
  cout<<"\nsum="<<sum;
 }
 exit_loop:
 {
  clrscr();
  cout<<"Thanks for order";
 }
 getch();
}