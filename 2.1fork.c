#include <stdio.h>
#include <unistd.h>

int main() {
  pid_t start = getpid();
  pid_t startParent = getppid();

  printf("Start PID=" + start + ", parent PID=" + startParent);

  pid_t child = fork();

  if (child != 0) { // parent
    printf("Parent: PID=" + getpid() + "child: PID=" + child);
    else {
    printf("Child: PID=" + getpid() + "parent: PID=" + getppid();
    }
  }
