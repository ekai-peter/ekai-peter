/*
author:ekai peter
reg no:D33-2442-2023
date:25/2/2025
*/
    
#include<stdio.h>

int main() {
int bookID;
int dueDate;
int returnDate;
int daysOverdue;
int fineRate;
int fineAmount ;

// prompting the user to enter bookID, dueDate, returnDate, daysOverdue, fineAmount and fineRate;

    printf("enter the bookID: \n");
    scanf("%d",&bookID);
    
    printf("enter the dueDate(in days from start of month)");
    scanf("%d",& dueDate);
    
    printf("enter the return date(in days from the start of the month)");
    scanf("%d",& returnDate);
    
    // program to get the daysOverdue;
    daysOverdue=returnDate-dueDate;
    
    // determining the fine amount based on overdue days;
    if (daysOverdue<=0) {
    fineRate=0;
    fineAmount=0;
    }    
  else if (daysOverdue > 0 && daysOverdue <=7) {
      fineRate=20;
      fineAmount= daysOverdue * fineRate;
    }
   else if (daysOverdue>=8 && daysOverdue <= 14) {
      fineRate=50;
      fineAmount=daysOverdue*fineRate;
    }
  else {
     fineRate = 100;
     fineAmount=daysOverdue*fineRate;
   }
   
   // display results 
   printf("the bookID is:%d\n",bookID);
   printf("the dueDate is:%d\n",dueDate);
   printf("the daysOverdue are:%d\n",daysOverdue);
   printf("the fineRate is ksh %d per day \n",fineRate);
   printf("the fineAmount is ksh %d\n", fineAmount);
   
   return 0;// execution successful 
}