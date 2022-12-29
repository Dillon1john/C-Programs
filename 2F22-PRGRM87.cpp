#include <iostream>

using namespace std;

int main(){
    for (int i= 5; i> 3; i--){
        for(int j=10; j<=11; j++){
          for (int k = 1; k<=3; k++){
		cout<<"Nested\n";
		cout<<i<<"     "<<j<<"       "<<k<<endl;  
        }
		
    }
	}
}