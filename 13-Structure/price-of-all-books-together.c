//WAP in c for making bill of books purchased with books name, author and prize
// THIS CODE  HAS ERRORS

#include<stdio.h>
#include<string.h>
struct book
{
    char name[200];
    char author[100];
    float price;
    float quantity;
    float total;
}
b[50];
int main()
{
    int i,l;
    float sum=0;
    printf("Enter the number of books purchased: ");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        printf("Enter the name of the book:- ");
        fgets(b[i].name,sizeof(b[i].name),stdin);

        printf("Enter the authotr name of the book:- ");
        fgets(b[i].author,sizeof(b[i].author),stdin);
        
        printf("Prize of Book\t: ");
        scanf("%f",&b[i].price);

        printf("Quantity\t: ");
        scanf("%f",&b[i].quantity);

        getchar();

        b[i].total=b[i].price*b[i].quantity;
        sum=sum+b[i].total;
    }
    
    printf("\nBill Details:\n");
    printf("-----------------------------------------------------------------\n");
    printf("Book Name \tAuthor \tPrice \t\tQuantity \tTotal \n");
    printf("-----------------------------------------------------------------\n");

    for(i=0;i<l;i++)
    {
        printf("%s\t\t %s\t %.2f\t\t %.2f\t\t %.2f\n",b[i].name,b[i].author,b[i].price,b[i].quantity,b[i].total);
    }
    printf("-----------------------------------------------------------------\n");
    printf("Total Price = %.2f\n",sum);
    printf("-----------------------------------------------------------------\n");
    return 0;            
}