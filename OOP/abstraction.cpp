#include<iostream>

class Smartphone{ 
    // we cannot create intances of abstract class
    // but we can create pointers of abstract class
    public:
    virtual void TakeSelfie()=0;
};

class Android : public Smartphone{
    public:
    void TakeSelfie(){
        std::cout<<" android selfie"<<std::endl;
    }
};
class Iphone:public Smartphone{
    public:
   void TakeSelfie(){
        std::cout<<" Iphone selfie"<<std::endl;
    }
};
int main(){
    Smartphone* s1 = new Android();
    s1->TakeSelfie();
    Smartphone* s2 =new Iphone();
    s2->TakeSelfie();
    
}