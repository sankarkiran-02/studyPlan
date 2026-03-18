#include<stdio.h>
#include<string.h>

struct Bank{
    char Name[20];
    int Balance;
};

void deposit(struct Bank *a){
    int depo;
    printf("Enter Deposit Amount: ");
    scanf("%d", &depo);

    a->Balance +=depo;
}

void withDrawal(struct Bank *a){
    int withD;
    printf("Enter WithDrawal Amount: ");
    scanf("%d", &withD);


    if(a->Balance>withD)
        a->Balance -= withD;
    else
        printf("Insuficient Balance !!\n");
}

void display(struct Bank *a){
    printf("\n");
    printf("Account details: \n");
    printf("---------------- \n");
    printf( "Acc Holder Name\t: %s\n", a->Name);
    printf("Total Balance \t: %d\n", a->Balance);
}

int main(){

    struct Bank Acc;

    printf("Enter Acc Holder Name: ");
    scanf("%19[^\n]", Acc.Name);
            

    printf("Enter Initial Balance: ");
    scanf("%d", &Acc.Balance);


    
    deposit(&Acc);
    deposit(&Acc);

    withDrawal(&Acc);
    deposit(&Acc);
    withDrawal(&Acc);

    display(&Acc);
}