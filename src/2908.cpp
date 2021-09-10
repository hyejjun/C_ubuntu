# include <iostream>
using namespace std;

void reverseString(char* s); 

int main(){
    string a,b;
    cin >> a >>b;

    string bigger;
    for(int i=2; i>=0; i--){
        if(a[i] > b[i]){
            bigger =  a;
            break;
        }else if(a[i] < b[i]){
            bigger = b; 
            break;
        }
    }

    cout<<bigger[2]<<bigger[1]<<bigger[0];

    return 0;
}