#include <iostream> 
using namespace std;

// Program that outputs a fastfood restaurant's slogan

class FastFood {

    public:
    string food;
    void papajohn(){
        cout<< "Better ingredients, better pizza"<<endl;
    }
    void subway(){
        cout<<"Eat Fake" << endl;
    }
    void KFC(){
        cout<< "Finger licking good"<< endl;
    }
    void Dunkin(){
        cout << "80% is ice, 15% is drink 5% cup" << endl;
    }
    void pizzahut(){
        cout<<"Professor doesn't like me"<< endl;
    }
    void burgerking(){
        cout<<"Best original chicken sandwich. Professor approved" << endl;
    }
}
int main(){
    FastFood slog;
    
    slog.KFC();
    slog.papajohn();
    slog.subway();
    slog.Dunkin();
    slog.burgerking();
    
}