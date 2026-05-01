#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main() {
  if (fork() != 0)
      exit(0);
  setsid();
  if (fork() != 0)
      exit(0);
  int fd = open("/dev/null", O_RDWR);

  dup2(fd, 0);
  dup2(fd, 1);
  dup2(fd, 2);
  close(fd);

  time_t start_time = time(NULL);
  int interval = 5;

  while (1) {
      if (difftime(time(NULL), start_time)>= interval) {printf("Yep it's ok"); break;}
  }
  return 0;
}
