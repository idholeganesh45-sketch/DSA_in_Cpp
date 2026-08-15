#include <iostream>
using namespace std;

// int main() {
//     int n,i;
//     bool isPrime=true;
//     cout << "enter num N";
//     cin>> n;
//     for (i=2;i*i<n;i++){
//         if (n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     cout<< (isPrime==true ? "Prime no": "Non Prime");
//     return 0;
// }

// int main(){
//     int m=10;
//     for (int i=1; i<=5; i++){
//         for (int j=1; i<=5; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//----------------------PATTERN---------------
//---------------Star------------------------
// int main(){ 
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=n; j++){
//             cout << "* ";
//         }
//         cout<<"\n";
//     }

//     return 0;
// }
//----------------char -------------------
// int main(){
//     int n = 4;
    
//     for(int i=0; i<n; i++){
//         char ch='A';
//         for (int j=0; j<n; j++){
//             cout<<ch;
//             ch=ch+1;
//         }
//     cout<<endl;
//     }
//     return 0;
//}
//------------------Number-------------------
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     int result=1;
//     for (int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if (result<10){
//                 cout<< result << "  ";
//             }else {
//                 cout<< result << " ";
//             }
            
//             result+=1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//-----------------------Char as above-----------------
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     char ch='A';
//     for (int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<ch << " ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//----------------------------triangle star ------------------------
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<=i; j++){
//             cout<< "* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//-------------------------Triangle patter of numms-----------------

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i+1; j++){
//             cout<<i+1 <<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//---------------char triangle--------------

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     char ch='A';
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i+1; j++){
//             cout<<ch<<" ";
            
//         }
//         ch+=1;
//         cout<<endl;
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i+1; j++){
//             cout<<j+1<<" ";
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//----------------reverse triangle----------

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for (int i=0; i<n; i++){
//         for (int j=i+1; j>0; j--){
//             cout<<j<<" ";
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//-------------------------Floyd's Triangle pattern-----

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     int num=1;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i+1; j++){
//             cout<< num<<" ";
//             num+=1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//-------------inverted reverse triangle-----------

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i; j++){
//             cout<< " ";   
//         }
//         for (int j=0; j<n-i; j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//----------------pyramid pattern------------

int main(){
    int n=4;
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            cout<< "    ";
        }
        for (int j=1; j<=i+1; j++){
            cout<< j<<" ";
        }
        for (int j=i; j>0; j--){
            cout <<j<<" ";
        }
        cout<<endl;
    }
}

//------------------hollowdiamon-------------------

// int main(){
//     int n=4;
//     //top
//     for (int i=0; i<n; i++){
//         for (int j=0; j<(n-i-1); j++){
//             cout <<"  ";
//         }
//         cout<<"* ";
//         if (i!=0){
//             for (int j=0; j<(2*i-1); j++){
//                 cout<<"  ";
//             }
//             cout<<"* ";
//         }
//         cout<<endl;
//     }


//     //bottom 
//     for(int i=0; i<n-1; i++){
//         //spaces
//         for (int j=0; j<(i+1); j++){
//             cout <<"  ";
//         }
//         cout<<"* ";

//         if (i != n-2){
//             //spaces
//             for(int j=0;j<2*(n-i)-5; j++){
//                 cout<<"  ";
//             }
//             cout <<"* ";

//         }
//         cout<<endl;
//     }
    
    
//     return 0;
// }



//-------------------------------Butterfly-pattern------------------

// int main(){
//     int n=4;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<(i+1); j++){
//             cout<< "* ";
//         }
//         for (int j=0; j<(n-i-1); j++){
//             cout<<"  ";
//         }
//         for (int j=0; j<(n-i-1); j++){
//             cout<<"  ";
//         }
//         for (int j=0; j<(i+1); j++){
//             cout<< "* ";
//         }
//         cout<<endl;
//     }

    
//     for (int i=0; i<n; i++){
//         for (int j=0; j<(n-i); j++){
//             cout<< "* ";
//         }
//         for (int j=0; j<i; j++){
//             cout<<"  ";
//         }
//         for (int j=0; j<i; j++){
//             cout<<"  ";
//         }
//         for (int j=0; j<(n-i); j++){
//             cout<< "* ";
//         }
//         cout<<endl;
//     }


//     return 0;

// }