#include<stdio.h>

int main()
{
    display();
    printf("\nHave a good day!!");
}

int display()
{
    int product;
    printf("Select Product\n");
    printf(" 1.Chocolate Drink	-	Rs.20 \n 2.Strawberry Drink	-	Rs.15 \n 3.Vanilla Drink	-	Rs.10 \n 4.protein Drink	-	Rs.30\n");
    printf("Enter the product number: ");
    scanf("%i",&product);
    selection(product);
	return(0);
}


int selection(int product)
{
    int c=2,s=2,v=2,p=2,i=0;
   switch(product)
   {
    case 1 :i=c;
            StockAvailability(i,product);
            break;
    case 2 :i=s;
            StockAvailability(i,product);
            break;
    case 3 :i=v;
            StockAvailability(i,product);
            break;
    case 4 :i=p;
            StockAvailability(i,product);
            break;
    default:printf("please enter the correct product Number");
            display();
    }
    return(product);
}

int StockAvailability(int i, int product)
{
    
    if(i>0)
    {
    printf("Selected product Stock count is:%i\n",i);
    insertmoney(product,i); 
    return(i,product);
    }
    else
    {
    printf("Stock is not available");
    display();
    }
}

int insertmoney(int product, int i)
{
    int ins,mrp1=20,mrp2=15,mrp3=10,mrp4=30,x=0;
    printf("\nInsert money: ");
    scanf("%i",&ins);
    switch(product)
   {
    case 1 :x=mrp1; 
            moneycheck(ins,x,product,i); break;
    case 2 :x=mrp2; 
            moneycheck(ins,x,product,i); break;
    case 3 :x=mrp3; 
            moneycheck(ins,x,product,i); break;
    case 4 :x=mrp4; 
            moneycheck(ins,x,product,i); break;
    }
    return(product,i);    
}

int moneycheck(int ins,int x,int product,int i)
{
    int c;
    if(ins>x)
    {
    c=ins-x;
    printf("\nProduct delivered\nPlease collect your change Rs.%i",c);
    printf("\nPresent Stock count is: %i",i=i-1);
    return(ins,x,product,i);
    }
    else if(ins==x)
    {
    printf("\nProduct delivered");
    printf("\nPresent Stock count is: %i",i=i-1);
    return(ins,x,product,i);
    }
    else if(ins<x)
    {
    printf("\nAmount is insufficient\nProduct not delivered\nReturned Amount of Rs.%i",ins);
    insertmoney(product,i);
    }
}
