int main() {
    int marks[5];
    for (int i=0; i<5; i++){
        cin>>marks[i];
    }
    for (int i=0; i<sizeof(marks)/4; i++){
       cout<<marks[2]<<endl; 
    }
    

    return 0;
}