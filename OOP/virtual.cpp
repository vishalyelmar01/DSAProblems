#include<iostream>

class Instrument{ // anstract class as it contain at least one virtual function
    public:
        virtual void makeSound()=0; // pure virtual function
};
// function is virtual in base class and same function is in derived class
// when we are invoking the base class pointer then it will call derived class
// if same function is not there then it will call base class function  only
class Accordion:public Instrument{
    void makeSound(){
            std::cout<<"Accordium palying ... "<<std::endl;
        }
};

class piano: public Instrument{
    public:
    void makeSound(){
        std::cout<<"Piano playing ..."<<std::endl;
    }
};
 // pure virtual function forces the evry dericed class to make their own implementation 
int main(){
    Instrument* Ins=new Accordion();
    //Ins->makeSound();
    Instrument* ins = new piano();
    //ins->makeSound();

    Instrument* instrument[2]={Ins,ins};
    for(int i=0;i<2;i++){
        instrument[i]->makeSound();
    }
}