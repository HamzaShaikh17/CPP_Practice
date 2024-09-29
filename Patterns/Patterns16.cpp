#include <iostream>

int main(){
    int n = 4, i =1;
    while(i<=n){
        int j =1;
        while (j<=i){
            std::cout<<n-i+1<<" ";
            j = j + 1;
        }
        std::cout<<std::endl;
        i = i+1;
    }
    return 1;
}