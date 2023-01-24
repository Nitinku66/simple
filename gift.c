#include <stdio.h>
int main()
{
    int x;
    printf("Who is the prime minister of India\n");
    printf("1.Manmohan Singh     2.  Narendra Modi\n");
    printf("3.Rahul Gandhi       4.Yogi\n");
    scanf("%d", &x);
    if(x==2){
        printf("Right Answer");
    }
    else if(x==1){
        printf("wromg answer");
    }
    else
    {  
        printf("Please choose correct key");
    }
getch();
}