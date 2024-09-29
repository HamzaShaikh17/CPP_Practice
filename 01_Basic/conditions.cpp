#include <iostream>

int main(){
    int a,b,c;
    //take input from user and store in variables a and b
    std::cin>>a>>b>>c;
    if(a>b){
        std::cout<<"a is greater"<<std::endl;
    }
    else{
        std::cout<<"b is greater"<<std::endl;

    }
    if (a>b && a>c){std::cout<<"a is greatest"<<std::endl;}
    else if (b>a && b>c){std::cout<<"b is greatest"<<std::endl;}
    else if (c>b && c>a){std::cout<<"c is greatest"<<std::endl;}
    return 0;

}