#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "genNum.h"

int main(){
  printf("Generating\n");
  int i;
  int array[10];
  for (i = 0; i < 10; i++){
    array[i] = genNum();
    printf("%d: %d\n", i, arr[i]);
  }
  printf("Writing\n");
  int write = open("file.txt", O_RDWR|O_CREAT, 0666);
  write(write, array, sizeof(array));
  if (errno) {
        printf("errno: %d\nstrerror: %s\n", errno, strerror(errno));
  }
  close(write);
  printf("Reading\n");
  int array[10];
  int read = open("file.txt", O_RDONLY);
  read(read, array, sizeof(array));
  if (errno) {
        printf("errno: %d\nstrerror: %s\n", errno, strerror(errno));
  }
  close(read);
  printf("Verifying\n");
  for (i = 0; i < 10; i++){
    printf("%d: %d \n", i, arr2[i] );
  }
}
