#include <stdio.h>
void main(){
    File *fptr;
    fptr = fopen("abc.txt", "r");
    int num;
    fscanf(fptr,"%d",&num);
    printf("The value of num is %d", num);
    fclose(fptr);
    return 0;
}



#include <stdio.h>
void main(){
    File *fptr;
    fptr = fopen("abc.txt", "w");
    int num = 23;
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}



#include <stdio.h>
void main(){
    File *fptr;
    fptr = fopen("abc.txt", "a");
    int num = 24;
    fprintf(fptr, "%d",num);
    fclose(fptr);
    return 0;
}
    



#include <stdio.h>
void main(){
    File ptr;
    ptr = fopen("abc.txt", "r");
    char c = fgetc(ptr);
    printf("%c",c);
    return 0;
}




#include <stdio.h>
void main(){
    File ptr;
    ptr = fopen("abc.txt", "w");
    fputc('c', ptr);
    return 0;
}



#include <stdio.h>
void main(){
    File ptr;
    ptr = fopen("abc.txt", "a");
    fputc('c', ptr); 
    return 0;
}
