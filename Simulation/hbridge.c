#include<at89x51.h>
void delay();
int i,j;
main()
{
P2=0x00;
while(1)
{
if(P1_0 ==0)
P2_0 = 1;
else if(P1_1 ==0)
P2_1 = 1;
else if(P1_0 == 0 && P1_1==0)
{
P2_0 = 1;
P2_1 = 1;
}
else
{
P2_0 = 0;
P2_1 = 0;
delay();
}
}
}

void delay()
{
for(i=0;i<=500;i++)
for(j=0;j<=300;j++);
}
