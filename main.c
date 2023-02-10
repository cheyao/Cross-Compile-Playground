#include <stdio.h>

int main() {
  printf("Hello world! I am compiled on");
  
  printf(
  #ifdef _WIN32
  "Windows 32-bit"
  #elif _WIN64
  "Windows 64-bit"
  #elif __APPLE__ || __MACH__
  "Mac OSX"
  #elif __linux__
  "Linux"
  #elif __FreeBSD__
  "FreeBSD"
  #elif __unix || __unix__
  "Unix"
  #else
  "Other"
  #endif
  );
  
  return 0;
}
