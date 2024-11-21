#include <stdio.h>
 
int main() {
 
    int sec, min, hour;
    scanf("%d", &sec);      //140156
    
    hour = sec /3600;       //h = (int)140156/3600 --> {h = 38}
    sec %= 3600;            //sec = resto de 140156/3600 --> sec = 3356
    
    min = sec / 60;         //m = (int)3356/60 --> {m = 55}
    sec %= 60;              //sec = resto de 3356/60 --> {sec = 56}

    printf("%d:%d:%d\n", hour, min, sec);
 
    return 0;
}