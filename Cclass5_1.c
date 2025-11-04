#include<stdio.h>
int main(){
    char name[100];
    char sec;
    int sem;
    float cgpa;
    char address[40];

    printf("welcome\nenter your name:");
    gets(name);
    printf("enter your section:");
    scanf("%c",&sec);
    printf("enter your semester:");
    scanf("%d",&sem);
    printf("enter your cgpa:");
    scanf("%f",&cgpa);
    //method no.1
    //char dustbin;
    //scanf("%c",&dustbin);

    //mathod no.2
    getchar();
    printf("please enter your address:");
    gets(address);

    printf("name=%s\nsec=%c\nsem=%d\ncgpa=%0.2f\naddress=%s",name,sec,sem ,cgpa,address);
}