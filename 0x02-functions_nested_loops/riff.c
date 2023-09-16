#include <stdio.h>

int h ;
int m;

void jack_bauer(void)
{
 for (h = 0; h < 24; h++)
 {
     for (m = 0; m < 60; m++) 
     {
         printf("%02d:%02d\n", h, m);
     }
 }
}
int main() {
    // Write C code here
    jack_bauer();
    return (0);
}
