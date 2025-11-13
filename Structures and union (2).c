#include <stdio.h>

struct Bank {
    int acc_no;
    char name[50];
    float balance;
};


void printLowBalance(struct Bank b[], int n) {
    printf("\nCustomers with balance below Rs.100:\n");
    for(int i = 0; i < n; i++) {
        if(b[i].balance < 100)
            printf("Acc No: %d\tName: %s\tBalance: %.2f\n", b[i].acc_no, b[i].name, b[i].balance);
    }
}


void processTransaction(struct Bank b[], int n) {
    int acc, code;
    float amt;
    printf("\nEnter Account Number, Amount and Code (1=Deposit, 0=Withdraw): ");
    scanf("%d %f %d", &acc, &amt, &code);

    for(int i = 0; i < n; i++) {
        if(b[i].acc_no == acc) {
            if(code == 1) {
                b[i].balance += amt;
                printf("Amount deposited successfully. New balance = %.2f\n", b[i].balance);
            } else {
                if(b[i].balance < amt)
                    printf("The balance is insufficient for the specified withdrawal.\n");
                else {
                    b[i].balance -= amt;
                    printf("Withdrawal successful. New balance = %.2f\n", b[i].balance);
                }
            }
            return;
        }
    }
    printf("Account number not found.\n");
}

int main() {
    struct Bank b[10];
    int n = 3;

    printf("Enter details of %d customers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("\nCustomer %d\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &b[i].acc_no);
        getchar();
        printf("Name: ");
        gets(b[i].name);
        printf("Balance: ");
        scanf("%f", &b[i].balance);
    }

    printLowBalance(b, n);
    processTransaction(b, n);

    return 0;
}

