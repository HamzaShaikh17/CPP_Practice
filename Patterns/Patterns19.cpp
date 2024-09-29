#include <iostream>

int main(){
    int i = 1, n = 5;
    while (i<=n){
        char ch = 'A' + i -1;
        int j = 1;
        while(j<=n-i){
            std::cout<<" ";
            j = j+1;
        }
        j =1;
        while(j<=i){
            std::cout<<ch<<" ";
            j = j+1;
        }
        std::cout<<std::endl;
        i = i + 1;
    }
    return 1;
}