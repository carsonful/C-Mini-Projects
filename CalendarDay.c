#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year){
  if (year % 4 != 0){
    return false;
    }
  else if (year % 100 != 0){
    return true; }
    else if (year % 400 != 0){
      return false;
      } else return true;     
}

int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 31};

//
void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add){
  while (days_left_to_add > 0){
    int days_left_in_month = days_in_month[*mm] - *dd;
    if (days_in_month[2] && is_leap_year(*yy) == true) {
      days_left_in_month++;
    }
  if (days_left_to_add > days_left_in_month) {
      days_left_to_add -= days_left_in_month + 1; //enter new month
      *dd = 1;
      if (*mm == 12){ //if we are on december move to next year
          *mm = 1;
          *yy = *yy + 1;
      }
      else *mm = *mm + 1; //otherwise increase month by 1  
  }
      
    
    else { //if we can fit all the days in the same month
    *dd = *dd + days_left_to_add; //add the days
    days_left_to_add = 0; //reset days left
    }
  }
}




int main() {
// LEAP OR NOT LEAP
int year, mm, dd, yy, days_left_to_add;
//ask for input year
printf("Enter a year between 1800 and 10000: \n");
//check if its leap year and output answer
scanf("%i", &year);
  if (is_leap_year(year) == true) printf ("Leap\n");
  else printf ("Not Leap\n");

//ADD DAYS TO DATE
printf("Enter a date between years 1800 and 10000 with the format mm dd yy and provide the numbers of days you want to add to that date: \n");
scanf ("%i%i%i%i", &mm, &dd, &yy, &days_left_to_add);

add_days_to_date (&mm, &dd, &yy, days_left_to_add);

printf("%i %i %i\n", mm, dd, yy);

}