#include <iostream>

using namespace std;

int primo(int p){
    int div = 0;
    for(int i =1; i <= p;i++){
        if(p % i == 0)
            div++;
    }
    if(div == 2){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int i;  

    for(i = 1; i <= 100; i++){
        if(primo(i) == 1)
            cout << i << endl;
    }
    return 0;
}