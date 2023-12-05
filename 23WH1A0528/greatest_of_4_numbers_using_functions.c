#include <stdio.h>
int max_of_four(int,int,int,int);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a,int b,int c,int d){
    if(a>b){
        if(a>c && a>d)
            return a;
    }
    if(b>c){
        if(b>a && b>d)
            return b;
    }
    if(c>d){
        if(c>a && c>b)
            return c;
    }
    if(d>a){
        if(d>b && d>c)
            return d;
    }
return 0;
}
