#include<iostream>
#include<list>
#include<vector>

class encapsulation
{
private:
    std::string Name;
    std::string OwnerName;
    int subscribersCount;
    std::list<std::string>videoTitle;
public:

    encapsulation(std::string name, std::string ownerName){
        Name =name;
        OwnerName = ownerName;
        subscribersCount =0;
    }

    void GetInfo(){
        std::cout<<Name<<std::endl;
        std::cout<<OwnerName<<std::endl;
        std::cout<<subscribersCount<<std::endl;
    }
    void Subscribe(){
        subscribersCount++;
    }

    void Unsubscribe(){
        if(subscribersCount>0){
            subscribersCount--;
        }
    }

    void publishVideo(std::string title){
        videoTitle.push_back(title);
    }



    std::list<std::string>getVideoTitle() const { return videoTitle; }
    void setVideoTitle(const std::list<std::string>&videoTitle_) { videoTitle = videoTitle_; }

    int getSubscribersCount() const { return subscribersCount; }
    void setSubscribersCount(int subscribersCount_) { subscribersCount = subscribersCount_; }

    std::string ownerName() const { return OwnerName; }
    void setOwnerName(const std::string &ownerName) { OwnerName = ownerName; }

    std::string name() const { return Name; }
    void setName(const std::string &name) { Name = name; }
};



int main(){
    encapsulation data("Nijas","vishal");
    data.publishVideo("C++");
    data.publishVideo("Python");
    data.Subscribe();

    data.Unsubscribe();
    data.Subscribe();

    data.GetInfo();
}


