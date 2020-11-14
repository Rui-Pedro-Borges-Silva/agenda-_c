#include <stdio.h>
int main(){
    int a ,b ,c ,d, n;

    scanf("%d", &n);
    scanf("%d%d", &a , &b);
    scanf("%d%d", &c , &d);

   // if((a>9 && c > 9) && (a < 18 && c < 18) && (b < 19 && d <19)){

        if ((c>=b) || (b - c < n))
        printf("impossivel\n\n");
        
            else if ((b > c) && (b - c > n)){

                if(a >= c && b > d){
                    d = d - n;
                    printf(" %d  %d \n\n", a , d);
                }

                if(a >= c && b < d){
                    b = b - n;
                    printf(" %d  %d \n\n", a , b);
                }

                if(a < c && b > d){
                    d = d - n;
                    printf(" %d  %d \n\n", a , d);
                }

                if(a < c && b < d){
                    b = b - n;
                    printf(" %d  %d \n\n", a , b);
                }
            }

    //}

}