#include <stdio.h>

int main() {
    int sem;
    float percentage;
    char usn[10];
    printf("Enter usn,semester,percentage :\n"); scanf("%10s%d%f",&usn,&sem,&percentage);
    printf("usn : %s\nsemester : %d\n",usn,sem);
    if(percentage >= 70 && percentage <= 100){
        printf("grade : FCD");
    }
    else if(percentage >= 60 && percentage < 70){
        printf("grade : FC");
    }
    else if(percentage >= 35 && percentage < 60){
        printf("grade : SC");
    }
    else if(percentage < 35){
        printf ("Fail");
    }
    else {
        printf ("invalid");
    }
    return 0;
}