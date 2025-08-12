#include<iostream>

class Car{
    public:
    int speed;
    std::string carType;
    int getMilage() const { return milage; }
    void setMilage(int milage_) { milage = milage_; }
    private:
    int milage;
    
};

int main(){

    Car cars;// object of class car cars is created here
    cars.speed=123;
    cars.carType= "BMW";
    cars.setMilage(12);
    std::cout<<"speed" << cars.speed<<std::endl;
    std::cout<<"carType "<< cars.carType<<std::endl;
    std::cout<<"milage "<< cars.getMilage()<<std::endl;
    return 0;
}