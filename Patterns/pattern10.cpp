#include <iostream>

int main(){
    int n = 5, i = 1;
    while (i<=n){
        int j = 1;
        while (j<=i){
            std::cout<< " ";
            j = j+1;
        }
            int k = 1;

            while (k<=n-j+2){
                std::cout<<j-1 << " ";
                k = k+1;

            }
            
        std::cout<<std::endl;
        //std::cout<<i<<std::endl;
        i = i+1;
    }
}