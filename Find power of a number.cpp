/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
Sample Input 1 :
 3 4
Sample Output 1 :
81
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x;
    int n;
    int p=1;
    cin>>x>>n;
     p=p*x;
   while(n!=1){
         p=p*x;
    n--;
   }
cout<<p;	
}
