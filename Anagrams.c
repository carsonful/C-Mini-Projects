#include<stdio.h>
#include<string.h>
int main() {
  int counter1[] = {0,0,0,0};
  int counter2[] = {0,0,0,0};
  int flag = 0;
  char s1[] = "dbca";
  char s2[] = "abcd";

  for (int i = 0; i < strlen(s1)+1; i++) {
    if (s1[i] == 'a') {
      counter1[0] += 1;
    } else if (s1[i] == 'b') {
            counter1[1] += 1;
    } else if (s1[i] == 'c') {
            counter1[2] += 1;
    } else if (s1[i] == 'd') {
            counter1[3] += 1;
    } else {
        continue;
    }
  }

    for (int i = 0; i < strlen(s2)+1; i++) {
    if (s2[i] == 'a') {
      counter2[0] += 1;
    } else if (s2[i] == 'b') {
            counter2[1] += 1;
    } else if (s2[i] == 'c') {
            counter2[2] += 1;
    } else if (s2[i] == 'd') {
            counter2[3] += 1;
    } else {
        continue;
    }
  }
    for (int i = 0; i < 4; i++) {
        if (counter1[i] == counter2[i]) {
                continue;
        } else if (!(counter1[i] == counter2[i])) {
                flag = 1;
        }
    }


    if (flag == 1) {
            printf("Not Anagram");
    } else {
            printf("Anagram");
    }
}