#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {100,100,100};

    int n = arr.size();

    if(n == 1){
        return 1;
    }

    bool flag = true;
    int maxLength = 1;

    if(arr[0] > arr[1]){
            flag = false;
            maxLength = 2;
    }
    else if(arr[0] < arr[1]){
            flag = true;
            maxLength = 2;
    }


    int len = 2;

    for(int i = 2; i < n;i++){

        if(arr[i] > arr[i-1] && flag == false){
                len++;
                flag = true;
        }
        else if(arr[i] < arr[i-1] && flag == true){
                len++;
                flag = false;
        }
        else{
                if(arr[i-1] > arr[i]){
                    flag = false;
                    len = 2;
                }
                else if(arr[i] > arr[i-1]){
                    flag = true;
                    len = 2;
                }
                else{
                     if(i+1 < n && arr[i] > arr[i+1]){
                        flag = false;
                        len = 2;
                        maxLength = max(len, maxLength);
                     }
                     else if(i+1 < n && arr[i] < arr[i+1]){
                        flag = true;
                        len = 2;
                        maxLength = max(len, maxLength);
                     }
                     i++;
                     continue;
                }
        }

            maxLength = max(len, maxLength);
        }


    cout<<maxLength<<endl;


}