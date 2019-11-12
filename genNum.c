#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int genNum(){
  int file =  open("/dev/random", O_RDONLY);
  int i;
  read(read, &i, sizeof(int));
  if (errno) {
        printf("errno: %d\nstrerror: %s\n", errno, strerror(errno));
  }
  close(file);
  return i;
}
