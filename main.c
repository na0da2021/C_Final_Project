// Calculator example using C code
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define KEY "Enter the calculator Operation you want to do:"

// Function prototype declaration
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void add_complex();
void sub_complex();
void mult_complex();
void ascending ();
void descending ();
void calculator_operations();


// Start of Main Program
int main()
{
    int X=1;
    char Calc_oprn;

    // Function call
    calculator_operations();

    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '?': modulus();
                      break;

            case '!': factorial();
                      break;

            case '^': power();
                      break;

            case 'a': add_complex();
                       break;

            case 'b': sub_complex();
                       break;

            case 'm': mult_complex();
                       break;

            case '<' : ascending ();
                       break;

           case '>' : descending ();
                       break;

            case 'H':
            case 'h': calculator_operations();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;

            default : system("cls");

    printf("\n******You have entered unavailable option");
    printf("*****\n");
    printf("\n***Please Enter any one of below available ");
    printf("options**\n");
                      calculator_operations();
        }
    }
}

//Function Definitions

void calculator_operations()
{
    //system("cls");  use system function to clear
    //screen instead of clrscr();
    printf("\n             Welcome to C calculator \n\n");

    printf("*** Press 'Q' or 'q' to quit ");
    printf("the program ****\n");
    printf("*** Press 'H' or 'h' to display ");
    printf("below options ***\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");

    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
     printf("Enter ! symbol for Factorial \n");
    printf("Enter a symbol for add complex \n");
    printf("Enter b symbol for subtracte complex \n");
    printf("Enter m symbol for multiplacate complex \n");
    printf("Enter < symbol for ascending operation \n");
    printf("Enter > symbol for descending operation \n");
}

void addition()
{
    int n, total=0, i=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(i<n)
    {
        scanf("%d",&number);
        total=total+number;
        i++;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{
    int a, b, c = 0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n%d - %d = %d\n", a, b, c);
}

void multiplication()
{
    int a, b, mul=0;
    printf("\nPlease enter first numb   : ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}

void division()
{
    int a, b, d=0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    while  (b==0){
        printf("maths error \n enter a valid number");
        scanf("%d",&b);
    }
     d=a/b;

    printf("\nDivision of entered numbers=%d\n",d);
}

void modulus()
{
    int a, b, d=0;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number  : ");
    scanf("%d", &b);
      while  (b==0){
        printf("invalid operation \n enter a valid number");
        scanf("%d",&b);
    }
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}

void power()
{
    int a,num, p;
    printf("\nEnter two numbers to find the result \n");
    printf("number: ");
    scanf("%d",&a);

    printf("power : ");
    scanf("%d",&num);

    p=pow(a,num);

    printf("\n%d to the power %d = %d \n",a,num,p);
}

int factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\nPlease enter a positive number tofind factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;}

    void add_complex()
    {
        int real_1 ; int imag_1 ;
        int real_2 ; int imag_2 ;
        int sum_r,sum_m ;
        printf("\n enter the first complex number real--imag");
        scanf("%d  %d",&real_1,&imag_1);
          printf("\n enter the second complex number real--imag");
        scanf("%d  %d",&real_2,&imag_2);

        sum_r=real_1+real_2;
        sum_m=imag_1+imag_2;
        printf("\n the result = %d+%di",sum_r,sum_m);

    }

     void sub_complex()
    {
        int real_1 ; int imag_1 ;
        int real_2 ; int imag_2 ;
        int sub_r,sub_m ;
        printf("\n enter the first complex number real--imag");
        scanf("%d  %d",&real_1,&imag_1);
          printf("\n enter the second complex number real--imag");
        scanf("%d  %d",&real_2,&imag_2);

        sub_r=real_1-real_2;
        sub_m=imag_1-imag_2;
        printf("\n the result = %d+%di",sub_r,sub_m);

    }
      void mult_complex()
    {
        int real_1 ; int imag_1 ;
        int real_2 ; int imag_2 ;
        int mult_r,mult_m ;
        printf("\n enter the first complex number real--imag");
        scanf("%d  %d",&real_1,&imag_1);
          printf("\n enter the second complex number real--imag");
        scanf("%d  %d",&real_2,&imag_2);

        mult_r=real_1*real_2-imag_1*imag_2;
        mult_m=real_1*imag_2+real_2*imag_1;
        printf("\n the result = %d+%di",mult_r,mult_m);

    }
    void ascending ()
    {  int n;int arr [20];int i,j;
        printf("\n enter numbers of elements you want to ascend \n");
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
            printf("enter the %d number \n",i);
            scanf("%d",&arr[i]);
        }
        for (i=0;i<n;i++)
        {
          for (j=i+1;j<n;j++)

          {    int temp;
              if (arr[i]>arr[j])
              {
                  temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
              }
          }
        }
         printf("the ascending numbers \n");

        for (i=0;i<n;i++)
        {
            printf("%d  ",arr[i]);
        }
    }

    void descending ()
    {
       int n;int arr [20];int i,j;
        printf("\n enter numbers of elements you want to descend \n");
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
            printf("\n enter the %d number \n",i);
            scanf("%d",&arr[i]);
        }
        for (i=0;i<n;i++)
        {
          for (j=i+1;j<n;j++)

          {    int temp;
              if (arr[i]<arr[j])
              {
                  temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
              }
          }
        }
         printf("the descending numbers \n");

        for (i=0;i<n;i++)
        {
            printf("%d  ",arr[i]);
        }
    }
