#include <iostream>

int main(){
    int n = 5, i =1;
    while(i<=n){
        int j = 1;
        while(j<=n ){
            if(j ==i | j==1 | j==n){
                std::cout<<"N";
            }
            else{
                std::cout<<" ";
            }
        j = j +1;
        }
        std::cout<<std::endl;
        i = i+1;
    }
    return 1;
}