#include <cs50.h>
#include <stdio.h>

void hashes(int side){
    for (int i = 0; i < side; i++){
        printf("#");
    }
}

void spaces(int row) {

    switch (row) {
        case 8:
        printf(".......");
        break;

        case 7:
        printf("......");
        break;

        case 6:
        printf(".....");
        break;

        case 5:
        printf("....");
        break;

        case 4:
        printf("...");
        break;

        case 3:
        printf("..");
        break;

        case 2:
        printf(".");
        break;

        case 1:
        break;
    }
}


int main(void){
    int height;
    int side = 0;
    do {
    printf("Enter the height (1-8):\n");
    scanf("%d", &height);
    } while (height < 0 || height > 8);


    // get user input and initalize heigh va


    while (height != 0){
        side++;
        spaces(height);
        hashes(side);
        printf("\t");
        hashes(side);
        printf("\n");
        height--;
    }
    printf("done");
}