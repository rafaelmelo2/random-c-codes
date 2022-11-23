#include <stdio.h>

//function to move disks on towers
void movetower(int n, char x, char y, char z)


int main(){
    int discos;
    printf("\t\t\t\tTOWER OF HANOI\n\n");
    printf("\nEnter the number of disks: ");
    scanf("%d", &disks);
    movetorre(disks,'A', 'C', 'B');
    return 0;

}

void movetower(int n, char x, char y, char z){
    int i;
    if(n==1){
        printf("\nDisk 1 passed the tower %c to tower %c", x, y);
        return;
    }
    movetower(n-1, x, z, y);
    printf("\nDisk %d passed the tower %c to tower %c", n, x, y);
    movetower(n-1, z, y, x);
    for(i=0; i<n; i++)
        printf("\n\tDisk %d stayed in the tower %c", i+1, y);
}
