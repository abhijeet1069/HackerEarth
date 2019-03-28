/*The program takes inputs four bit binary number and outputs three bits crc*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
/*--Preparing input array num[]--*/
 char str[10];
 int len,i,num[10]={0},j;
 int divisor[4]={1,0,1,1},result[4]={0};
 system("cls");
 printf("Enter 4 bit binary data ");
 scanf("%s",str);
 len=strlen(str);
 for(i=0;i<len;i++){
   if(str[i]==48||str[i]==49)
     num[i]=str[i]-48;
   else
     exit(0);
 }
/*--------initialisation and first xor----------*/
 for(i=0;i<4;i++)
   result[i]=num[i];
     if(num[0]==0)
     {
       for(i=0;i<4;i++)
        result[i]=result[i]^0;
     }
    else
    {
      for(i=0;i<4;i++)
       result[i]=result[i]^divisor[i];
    }
 /*----------subsequent xor------------------------*/
 for(j=0;j<3;j++)
 {
   if(result[0]==0)   //if bit[0]=0 then check bit[1]
   {
     if(result[1]==0){  //if bit[1]=0 then left shift,drop down,xor with 0000
       for(i=0;i<4;i++)
         result[i]=result[i+1];
     result[3]=num[4+j];
       for(i=0;i<4;i++)
         result[i]=result[i]^0;
	 }
   else if(result[1]==1){//if bit[1]=1 then left shift,drop down,xor with divisor
     for(i=0;i<4;i++)
       result[i]=result[i+1];
     result[3]=num[4+j];
     for(i=0;i<4;i++)
       result[i]=result[i]^divisor[i];
	}
}
     else if(result[0]==1){
       for(i=0;i<4;i++)
         result[i]=result[i]^divisor[i];
}
}
/*----------final result in last three bits of res---------*/
printf("CRC=");
for(i=1;i<4;i++)
printf("%d",result[i]);
 getch();
}
