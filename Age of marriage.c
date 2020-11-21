#include<stdio.h>
int main()
{
     int age,h,s;
     printf("...........................................Determining the age of marriage of girls....................................");
     printf("\n");
         printf("\n");
             printf("\n");

                 printf("\n");

    printf("Please tell us your age : ");
    scanf("%d", & age);
    if(age<18){
         printf("\n");
        printf("It's not perfect time to marry for you. Please stay on your study. Best wishes for you.");
    }
    else if(age==18){
            printf("\n");
        printf("You are matchued for marriage. If you want you can do it or if you dont want you can stay on your study.");
    }
    else if(age>18 && age<25){
                printf("\n");
        printf("You age is perfect for marriage. Plaese tell us your study position.\n");
        printf("\n");
        printf("Tell us your honours session :");
        scanf("%d", & h);
         printf("Tell us your semester : ");
        scanf("%d", &s);
        printf("\n");
        if(h<2019,s>2 )
            {
                    printf("\n");
            printf("You should marry & stay on study after marriage.");
            printf("Thank You\n");
            printf("\n");
        }
        else {
                printf("\n");
            printf("Its your choice what should you do.\n");
            printf("Suggestion for you: \n");
            printf("Give the exam of 2 semester and think about marry.\n");
            printf("\n");
        }
    }
    else if(age==25){
            printf("\n");
        printf("You should marry as soon as possible.\n");
    }
    else if(age>25 && age<=32){
            printf("\n");
        printf("Its your wish that what will you do. If you want to marry please quickly do it.");
    }
    else if(age>32){
            printf("\n");
        printf("You are not allow for marriage.Please stay on your own position or you can sucide .");

    }

}

