/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
https://leetcode.com/problems/palindrome-number/

Starting given in leetcode
bool isPalindrome(int x){

}
*/

int main(){
    long int number, r = 0;
    
    printf("Enter the numebr: ");
    scanf("%d", &number);

    long int temp = number;
    while(temp !=0 ){
        r = r*10 + temp%10;
        temp = temp/10;
    }

    printf("R: %d", r);
    if(r == number){
        printf("\ntrue: ");
    }
    else{
       printf("\nfalse: ");
    }
    return 0;
}