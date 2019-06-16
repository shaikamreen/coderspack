/*write a c program to take the temperature in celsius and covert it into farennheit and display it back*/
#include<stdio.h>
main()
{
float tempc=0,tempf=0;
printf("enter the temperature in celcius");
scanf("%d",&tempc);
tempf=(tempc*9/5)+32;
printf("temperature in farenheit=%f",tempf);                		
}
