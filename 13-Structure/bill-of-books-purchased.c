//WAP in c for making bill of books purchased with books name, author and prize

#include <stdio.h>
#include <string.h>

struct book {
    char name[200];
    char author[100];
    float price;
    float quantity;
    float total;
};

int main() {
    int i, l;
    float sum = 0;
    
    printf("Enter the number of books purchased: ");
    scanf("%d", &l);
    
    // Consume the newline character left in the input buffer
    getchar();
    
    struct book b[50];
    
    for (i = 0; i < l; i++) {
        printf("Enter the name of the book: ");
        fgets(b[i].name, sizeof(b[i].name), stdin);
        
        // Remove trailing newline character
        if (b[i].name[strlen(b[i].name) - 1] == '\n') 
        {
            b[i].name[strlen(b[i].name) - 1] = '\0';
        }
        
        printf("Enter the author name of the book: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);
        
        // Remove trailing newline character
        if (b[i].author[strlen(b[i].author) - 1] == '\n') {
            b[i].author[strlen(b[i].author) - 1] = '\0';
        }

        printf("Price of Book: ");
        scanf("%f", &b[i].price);

        printf("Quantity: ");
        scanf("%f", &b[i].quantity);
        
        // Consume the newline character left in the input buffer
        getchar();

        b[i].total = b[i].price * b[i].quantity;
        sum += b[i].total;
    }

    printf("\nBill Details:\n");
    printf("-----------------------------------------------------------------\n");
    printf("Book Name \tAuthor \tPrice \t\tQuantity \tTotal \n");
    printf("-----------------------------------------------------------------\n");

    for (i = 0; i < l; i++) {
        printf("%-16s %-8s %.2f\t\t %.2f\t\t %.2f\n", b[i].name, b[i].author, b[i].price, b[i].quantity, b[i].total);
    }
    
    printf("-----------------------------------------------------------------\n");
    printf("Total Price = %.2f\n", sum);
    printf("-----------------------------------------------------------------\n");
    
    return 0;
}
