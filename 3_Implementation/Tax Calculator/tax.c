#include<stdio.h>

int oldSlab(int income)
{
    int tax=0,s;
    if (income<=1000000)
    {
        tax+=12500;
        income-=500000;
        s= (income*0.2);
        tax+=s;

        return tax;
    }
    else if (income>1000000)
    {
        tax+=12500;
        income-=500000;
        tax+=100000;
        income-=500000;
        s= (income*0.3);
        tax+=s;

        return tax;
    }
}
int newSlab(int income)
{
    int tax=0,s;
    if (income<=1500000)
    {
        if (income<=750000)
        {
            tax+=12500;
            income-=500000;
            s= (income*0.1);
            tax+=s;
        }
        else if (income>750000 && income<=1000000)
        {
            tax+=37500;
            income-=750000;
            s= (income*0.15);
            tax+=s;
        }
        else if (income>1000000 && income<=1250000)
        {
            tax+=75000;
            income-=1000000;
            s= (income*0.2);
            tax+=s;
        }
        else if (income>1250000 && income<=1500000)
        {
            tax+=125000;
            income-=1250000;
            s= (income*0.25);
            tax+=s;
        }

    }
    else
    {
        tax+=187500;
        income-=1500000;
        s= (income*0.3);
        tax+=s;
    }
    return tax;
}

int main()
{
    int x=1050000,y;
    if (x<=500000)
    { printf("You are relaxed from paying any taxes under section 84A\n");}
    else
    {
        printf("Your salary = %d\n",x);
        printf("According to Old slab Income tax = %d\n",oldSlab(x));
        printf("Accorting to New slab Income tax = %d\n",newSlab(x));
        y=oldSlab(x)-newSlab(x);
        if (y>0)
        { printf("You are saving %d amount on new slab\n",y);}
        else if (y==0)
        { printf("No matter what you use, its equal\n");}
        else
        { printf("You are saving %d amount on old slab\n",-y);}
    }
}