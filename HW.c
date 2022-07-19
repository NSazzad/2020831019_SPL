#include<stdio.h>
#include<math.h>
struct player
{
    int run[5];
};
int cmp(int a[5])
{
    int j;
    float avg,sqr,dif;
    for(j=0,avg=0,sqr=0;j<5;j++)
        {
            avg+=a[j];
            sqr+=pow(a[j],2);
        }
        avg=pow((avg/5),2);
        sqr/=5;
        dif=sqrt(sqr-avg);
        return dif;
}
int main()
{
    int j,k=1;
    float min,avg,sqr,dif;
    struct player play1={34,50,44,34,4};
    for(j=0,avg=0,sqr=0;j<5;j++)
        {
            avg+=play1.run[j];
            sqr+=pow(play1.run[j],2);
        }
        avg=pow((avg/5),2);
        sqr/=5;
        min=sqrt(sqr-avg);

    struct player play2={28,16,45,45,6};
    dif=cmp(play2.run);
    if(dif<min)
    {
        k=2;
        min=dif;
    }
    struct player play3={100,50,4,34,64};
    dif=cmp(play3.run);
    if(dif<min)
    {
        k=3;
        min=dif;
    }
    struct player play4={11,23,43,5,23};
    dif=cmp(play4.run);
    if(dif<min)
    {
        k=4;
        min=dif;
    }
    struct player play5={1,20,43,15,16};
    dif=cmp(play5.run);
    if(dif<min)
    {
        k=5;
        min=dif;
    }
    printf("%dth player is the best batsman.",k);
    return 0;
}
