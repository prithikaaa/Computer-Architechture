 // AND OPERATION
/*int main(){
    //bit==n&1;
    int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    int bit1 = (a&1);
    int bit2 = (b&1);
    float ans=0;
    int l=0;
    while(a && b != 0){
    int final=(bit1&bit2);
    ans = (final*pow(10,l)) + ans;
            a= a>>1;
            b= b>>1;
            l++;
            bit1 = (a&1);
            bit2 = (b&1);
     }
     cout<<"and = " <<ans<<endl;
    
}*/
 // OR OPERATION
/*int main(){
     int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
     int bit1 = (a&1);
    int bit2 = (b&1);
    float ans=0;
    int l=0;
    while(a && b != 0){
    int final=(bit1||bit2);
    ans = (final*pow(10,l)) + ans;
            a= a>>1;
            b= b>>1;
            l++;
            bit1 = (a&1);
            bit2 = (b&1);
     }
     cout<<"or = " <<ans<<endl;
}*/
 // XOR OPERATION
 /*int main(){
     int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
     int bit1 = (a&1);
    int bit2 = (b&1);
    float ans=0;
    int l=0;
    while(a && b != 0){
    int final=(bit1^bit2);
    ans = (final*pow(10,l)) + ans;
            a= a>>1;
            b= b>>1;
            l++;
            bit1 = (a&1);
            bit2 = (b&1);
     }
     cout<<"Xor = " <<ans<<endl;
     float num =0, i=o;
     while(ans != 0){
      int dig = ans%10;  
            num = (pow(2,i)*dig) + num;
            ans= ans/10;
            i++;}
            cout<< num<<endl;
}*/

//not operation
/*int main(){
     int a;
    cout<<"enter a"<<endl;
    cin>>a;
     int bit1 = (a&1);
    float ans=0;
    int l=0;
    while(a != 0){
    int final=(!bit1);
    ans = (final*pow(10,l)) + ans;
            a= a>>1;
            l++;
            bit1 = (a&1);
     }
     cout<<"not = " <<ans<<endl;
}*/
//XOR OPERATION 2
/*int main(){
     int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    if(a==b){
        cout<<"0"<<endl;
    }
    else{cout<<"1"<<endl;}
    }*/
//half adder
/*void Half_Adder(int A,int B){ 
    int Sum , Carry; 
    Sum = A ^ B;  
    Carry = A & B; 
    cout<<"Sum = "<< Sum << endl; 
    cout<<"Carry = "<<Carry<< endl; 
} 
int main() { 
    int A = 1; 
    int B = 0; 
    Half_Adder(A,B); 
    return 0; 
} */
