#include<stdio.h>
void namaste();
void kujizampo();
int main (){


    printf("enter i when person is indian and b when person is bhutani:");
    char ch;
    scanf("%c",&ch);
    if (ch=='i'){

        namaste();

        }
        else if (ch=='b'){

            kujizampo();
        }
        else {

            printf("i don't know good bye !");
        }
    


    

    return 0;
}
void namaste (){

    printf("namste!\n");
}
void kujizampo(){

    printf("kujizampo\n");
}