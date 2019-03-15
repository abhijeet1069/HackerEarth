#include<stdio.h>
#include<math.h>

char* seatType(int seat){
  int rem = seat%12;
  if(rem == 0 || rem == 1 || rem == 6 || rem == 7)
    return "WS";
  else if(rem == 2 || rem == 5 || rem == 8 || rem == 11)
      return "MS";
  else if(rem == 3 || rem == 4 || rem == 9 || rem == 10)
        return "AS";
}
int frontSeat(int mySeat){
  int compart = (mySeat-1)/12; //-1 done to include corner case like 12,24,36
  int mySeatR = mySeat - compart*12;
  int fSeat = abs(mySeatR-13) + (compart*12);
  return fSeat;
}

int main(){
  int  seat, test;
  scanf("%d",&test);
  while(test){
  scanf("%d", &seat);
  printf("%d ", frontSeat(seat));
  printf("%s\n", seatType(seat));
  --test;
}
}
