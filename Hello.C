# include<stdio.h>
# include<math.h>

int main(){
    int a = 10;
    int b = 34;
    printf("%d\n" , a + b / a * b);   // 34/10 = 3 ,34*3 = 112 , 112 + 10 = 112
    printf("%d\n" , a - b / a * b);   //34/10 = 3 ,-34*3 = 112 , -112 + 10 = -92
    printf("%d\n" , a + (b / a) * b);  // 34/10 = 3 ,34*3 = 112 , 112 + 10 = 112
    printf("%d\n" , a * b / a * b);  //34 * 10 / 10 = 34 , 34 * 34 = 1156





return 0;

    
}
