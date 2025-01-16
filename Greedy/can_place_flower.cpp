#include<bits/stdc++.h>
using namespace std;

 bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        if(flowerbed.size() == 1 && flowerbed[0] == 1 && n >= 1){
            return false;
        }
        if(flowerbed.size() == 1 && flowerbed[0] == 0 && n > 1){
            return false;
        }

        if(flowerbed.size() == 1 && flowerbed[0] == 0 && n <= 1 || flowerbed.size() == 1 && flowerbed[0] == 1 && n == 0){
            return true;
        }


        for(int i=0;i<flowerbed.size() && n>0 ;i++){

            if(i == 0 && n > 0){
                if(flowerbed[i] == 0 && flowerbed[i+1] == 0){
                    flowerbed[i] = 1;
                     
                    n--;
                }
            }
            else if(i == flowerbed.size()-1 && n>0){
                 if(flowerbed[i] == 0 && flowerbed[i-1] == 0){
                    flowerbed[i] = 1;
                    n--;
                }
            }
            else{

                if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && n> 0){
                        flowerbed[i] = 1;
                        n--;
                }
            }
        }
        
        return n == 0;

 }

 int main(){

        vector<int> flowerbed = {1,0,0,0,0,1};
        int n = 2;

        cout<<canPlaceFlowers(flowerbed, n)<<endl;

        
 }