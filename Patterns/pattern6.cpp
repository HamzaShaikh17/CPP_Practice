#include <iostream>

int main(){
    int n = 5, i = 1;
    while (i<=n){
        int j = 1;
        while (j<=n){
            std::cout<<"*"<< " ";
            j = j+1;
        }
        std::cout<<std::endl;
        //std::cout<<i<<std::endl;
        i = i+1;
    }
}