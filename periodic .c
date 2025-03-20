#include<stdio.h>
int main(){
    int a;
    int m;
    int n;
    int exit ;
    int exi;
    printf("Welcome to Modern Periodic Table\n\n");
    printf(">Enter to 1 know about an element\n\n");
    printf("> Enter 2 to close to periodic table\n\n");
    printf("Enter\n");
    scanf("%d",&n);
    if(n==1){
        printf("Press 3 to search the element by atomic number\n\n");
        printf("Enter\n\n");
        scanf("%d",&m);
        if(m==3){
            printf("Enter the atomic number of the element to be searched:");
            scanf("%d",&a);
            if(a==1){
                printf("Name:Hydrogen\n");
                printf("Symbol:H\n");
                printf("Atomic Number:1\n");
                printf("Electronic configuration:1s^1\n");
                printf("Discovered by:Henry cavendish\n");
                printf("Charge:+1\n");
            }
        }
    }
    else if(n==2){
           printf("Do you want to exit?(yes/No)\n");
           printf("> Press 6 for Yes\n");
           printf(">Press 7 for No\n");

           printf("Enter\n");
           scanf("%d",&exit);

           if(exit==6){
            printf("Are you sure tou want to close periodic table?(Yes/No)\n");
            printf(">Press 4 for Yes\n");
            printf(">Press 5 for No\n ");

            printf("Enter\n");
            scanf("%d",&exit);

             if(exi==4){
                printf("The periodic table has closed");
             }

             else if(exi==5){
                printf("Periodic table has not closed and you can continue to learn more about elements\n\n");
                printf("Enter the atomic number of element to be searched:\n\n");
                scanf("%d",&a);
                
                    if(a==1){
                        printf("Name:Hydrogen\n");
                        printf("Symbol:H\n");
                        printf("Atomic Number:1\n");
                        printf("Electronic configuration:1s^1\n");
                        printf("Discovered by:Henry cavendish\n");
                        printf("Charge:+1\n");
                    }
                }
             }
             else if(exit==7){
                printf("Periodic table has not closed and you can continue to learn more about elements\n\n");
                printf("Enter the atomic number of element to be searched:\n\n");
                scanf("%d",&a);
                if(a==1){
                    printf("Name:Hydrogen\n");
                        printf("Symbol:H\n");
                        printf("Atomic Number:1\n");
                        printf("Electronic configuration:1s^1\n");
                        printf("Discovered by:Henry cavendish\n");
                        printf("Charge:+1\n");

                }
             }
           }
        
    }
