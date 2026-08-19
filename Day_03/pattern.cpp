#include<iostream>
#include<string>

using namespace std;

void pattern1(int n){
    //Outer Loop
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=1; i<=n; i++){
        // Spaces
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        // stars
        for(int j=0; j<2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=1; i<=n; i++){
        // spaces
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*(n-i)+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern9(int n){
      for(int i=1; i<=n; i++){
        // Spaces
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        // stars
        for(int j=0; j<2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        // spaces
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*(n-i)+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    int star = 1;
    for(int i=1; i<=2*n-1; i++){
        // star
        for(int j=0; j<star; j++){
            cout<<"*";
            
        }
        if(i<n) star++;
        else star--;
        cout<<endl;
    }
}

void pattern11(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if((i%2)==(j%2))cout<<1<<" ";
                
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}

void pattern12(int n){
    int num=0;
    for(int i=1; i<=n; i++){
        // left tringle
        for(int j=0; j<i; j++){
            num= num+1;
            cout<<num;
            
        }
        // spaces
        for(int j=0; j<2*(n-i); j++){
            cout<<" ";
        }
        //right tringle
         for(int j=0; j<i; j++){
            cout<<num;
            num= num-1;
        }
        cout<<endl;
    }
}

void pattern13(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
           cout<<num<<" ";
           num= num+1;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
           cout<<ch; 
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+n-i-1; ch++){
           cout<<ch; 
        }
        cout<<endl;
    }
}

void pattern16(int n){
    for(int i=0; i<n; i++){
        char ch='A'+i;
        for(int j=0; j<=i; j++){
           cout<<ch; 
        }
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i=1; i<=n; i++){
        // spaces
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        // alphabets
        char ch='A';
        int breakpoint=(2*i-1)/2;
        for(int j=0; j<2*i-1; j++){
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;
        }
        cout<<endl;
    }
}

void pattern18(int n){
    for(int i=0; i<n; i++){
        char c='A'+n-1;
        for(char ch=c-i; ch<=c;ch++){
            cout<<ch; 
        }
        cout<<endl;
    }
}

void pattern19(int n){
    for(int i=0; i<n; i++){
        // stars
        for(int j=0; j<n-i; j++){
            cout<<"*"; 
        }
        for(int j=0; j<2*i; j++){
            cout<<" "; 
        }
        for(int j=0; j<n-i; j++){
            cout<<"*"; 
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        // stars
        for(int j=0; j<i; j++){
            cout<<"*"; 
        }
        for(int j=0; j<2*(n-i); j++){
            cout<<" "; 
        }
        for(int j=0; j<i; j++){
            cout<<"*"; 
        }
        cout<<endl;
    }

}

void pattern20(int n){
    int stars=1;
    int spaces=2*(n-1);
    for(int i=0; i<2*n-1; i++){
        // stars
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
       
        for(int j=0; j<spaces; j++){
            cout<<" "; 
        }
        if (i<n-1) spaces-=2;
        else spaces+=2;
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
         if (i<n-1) stars++;
        else stars--;
        cout<<endl;
    }
}

void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==0 || j==n-1 || i==0 || i==n-1){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<n-min(min(top,left),min(right,down))<<" ";
        }
        cout<<endl;
    }
}

int main(){
    pattern22(3);
    // int testcase;
    // cin>>testcase;
    // int n;
    // for(int i=0; i<testcase; i++){
    //     cin>>n;
    //     pattern16(n);
    //     cout<<endl;
    // }
}