// Structure
#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main(){
    struct student s1,s2,s3;
    s1.roll = 1;
    s1.marks = 23.5;
    s2.roll = 2;
    s2.marks = 23;
    s3.roll = 3;
    s3.marks = 20;
    printf("Roll No.:%d\n",s1.roll);
    printf("Marks: %.2f\n",s1.marks);
    printf("Roll No.:%d\n",s2.roll);
    printf("Marks: %.2f\n",s2.marks);
    printf("Roll No.:%d\n",s3.roll);
    printf("Marks: %.2f\n",s3.marks);    
    
    return 0;
}





// typedef struct
#include <stdio.h>

typedef struct {
    int roll;
    char name[20];
    float marks;
}student;

int main(){
    student s1,s2,s3;
    s1.roll = 1;
    s1.marks = 23.5;
    s2.roll = 2;
    s2.marks = 23;
    s3.roll = 3;
    s3.marks = 20;
    printf("Roll No.:%d\n",s1.roll);
    printf("Marks: %.2f\n",s1.marks);
    printf("Roll No.:%d\n",s2.roll);
    printf("Marks: %.2f\n",s2.marks);
    printf("Roll No.:%d\n",s3.roll);
    printf("Marks: %.2f\n",s3.marks);    
    
    return 0;
}




// Structure with Functions
#include <stdio.h>

struct student {
    int roll;
    float marks;
};
void Display(struct student s){
    printf("Roll No.: %d\n",s.roll);
    printf("Marks: %.2f",s.marks);
}
int main(){
    struct student s1 = {1,23.5};
    Display(s1);
    return 0;
}




// Pointer to Structure
#include <stdio.h>

struct Student {
    int roll;
    float marks;
};
int main(){
    struct Student s1 = {2,23};
    struct Student *ptr;
    ptr = &s1;
    printf("Roll No.: %d\n",ptr->roll);
    printf("Marks: %.2f",ptr->marks);

    return 0;
}
