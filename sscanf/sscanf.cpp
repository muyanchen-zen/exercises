#include <stdio.h>

int main(){
const char* url = "https://images.mapillary.com/OSFt9lOkVQoCiqrpAM5C0w/thumb-2048.jpg";
char buf[32];
printf("%s\n", url+28);
sscanf(url+29, "%[^/]", buf);
printf("%s\n",buf);
return 0;
}





