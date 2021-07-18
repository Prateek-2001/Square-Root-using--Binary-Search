#Finding sqrt using Binary Search using Python3
#18th July 2021
#Prateek Pradhan - 1910990835

#This Function finds square root of number upto specified precision
def squareRoot(number, precision):
 
    start = 0
    end, ans = number, 1
 
    #Binary Search
    while (start <= end):
        mid = int((start + end) / 2)
 
        if (mid * mid == number):
            ans = mid
            break
 
        if (mid * mid < number):
            start = mid + 1
            ans = mid
 
        else:
            end = mid - 1
            
    #Calculating the the decimal part
    decimal = 0.1
    for i in range(0, precision):
        while (ans * ans <= number):
            ans += decimal
 
        ans = ans - decimal
        decimal = decimal / 10
 
    return ans
 
#Main Function
number, precision = map(int, input().split())
answer = round(squareRoot(number, precision), precision)
print(answer)
