#include <iostream>
using namespace std;

// // void sumOfN(int n){
// //     int sum=0;
// //     for (int i=1; i<n+1; i++){
// //         sum+=i;
// //     }
// //     cout<<"Sum:"<<sum;
// // }
   

// // int main(){
// //     sumOfN(5);

// //     return 0;
// // }


// // //FACTORIAL
// // int factorial(int n){
// //     int fact=1;

// //     for (int i=1; i<=n; i++){
// //         fact*=i;
// //     }
// //     return fact;
// // }

// // int main(){
// //     cout<< factorial(3);
// //     return 0;
// // }

// //Calculate sum of digits of number.

// // int digitSum(int num){
// //     int sum=0;
// //     while (num>0){
// //         sum+=num%10;
// //         num=num/10;
// //     }
// //     return sum;
// // }

// // int main(){
// //     cout<<digitSum(145543216);
// //     return 0;
// // }

// //prime number

// // void check_prime(int n ){
// //     bool result=false;
// //     for (int i=2; i<n; i++){
// //         if ((n%i)==0){
// //             result=true;
// //             cout<<result;
// //             break;
// //         }
// //     }
// //     if (result==true){
// //         cout<<"Given Number is not a prime number ";
// //     }else {
// //         cout<<"Given Number is a prime number ";
// //     }
// //     return ;
// // }

// // int main(){
// //     check_prime(312);
// //     return 0;
// // }


// // prime number upto N
// // void print_prime(int n){
// //     for (int j=2; j<=n; j++){
// //         bool result=true;
// //         for (int i=2; i<j; i++){
// //             if (j%i==0){
// //                 result=false;
// //                 break;
// //             }
// //         }
// //         if (result==true){
// //             cout<<j<<endl;
// //         }

// //     }
// // }

// // int main(){
// //     print_prime(10);
// //     return 0;

// // }

// // febonache series
// void fibo(int n){
//     int a=0,b=1,c;
//     cout<<a<<" ";
//     cout<<b<<" ";
//     for (int i=0; i<n; i++){
//         c=a+b;
//         a=b;
//         b=c;
//         cout<<c<<" ";
//     }
// }

// int main(){
//     fibo (100);
//     return 0;
// }
// decimalto binary conversion

// int main(){
//     int decimalNo=86;
//     int ans=0;
//     int power=1,rem;
//     while (decimalNo>0){
//         rem=decimalNo%2;
//         decimalNo/=2;
//         ans+=(rem*power);
//         power*=10;
//     } 

//     cout<<ans;
//     return 0;
// }

// decimal to binary

// int main(){
//     int binaryNo=1010110;
//     int rem,power=1,ans=0;
//     while (binaryNo>0){
//         rem=binaryNo%10;
//         binaryNo/=10;
//         ans+=(rem*power);
//         power*=2;
//     }
//     cout<<ans;
//     return 0;
// }

// bitwise & and |
int main(){
    int a=4,b=6;
    cout<<(10>>1);
    return 0;
}