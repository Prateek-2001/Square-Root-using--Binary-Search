/*
Finding sqrt using Binary Search using Python3
18th July 2021
Prateek Pradhan - 1910990835
*/

// This Function finds square root of number upto specified precision
#include <stdlib.h>
 

float findSQRT(int number, int precision)
{
    int start = 0, end = number;
    int mid;
 
    float ans;
    
    while (start <= end) {

        mid = (start + end) / 2;
        
        if (mid * mid == number) {
            ans = mid;
            break;
        }
 
        if (mid * mid < number) {
          
            ans=start;
          
            start = mid + 1;
        }
 
        else {
            end = mid - 1;
        }
    }
    //Calculating the the decimal part 
    float increment = 0.1;
    for (int i = 0; i < precision; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
 
        ans = ans - increment;
        increment = increment / 10;
        
    }
    return ans;
}
 
//Main Function 
int main()
{
    int N, P;
 
    scanf("%d %d", &N, &P);
    printf("%g", findSQRT(N, P));
    
    return 0;
}