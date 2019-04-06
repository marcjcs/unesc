#include <stdio.h>
#include <stdlib.h>
void funcaoA ();
void funcaoB (int y);
int x = 8;
int main() {
int x;
x = 2;
funcaoB(x);
printf("%d\n",x);
funcaoA();
funcaoB(x);
printf("%d\n",x);
funcaoA();
system("pause");
return 0;
}
void funcaoA(){
x++;
printf("%d\n",x);
}
void funcaoB(int y){
int x = 12;
printf("%d\n",x);
}
