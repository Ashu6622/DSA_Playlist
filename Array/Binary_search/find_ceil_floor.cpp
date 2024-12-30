#include<bits/stdc++.h>
using namespace std;

int find_floor(vector<int> &a, int n, int x){

		int s = 0;
		int e = n-1;

		int ans = -1;

		while(s<=e){

			int mid = (s+e)/2;

			if(a[mid] == x){
				return x;
			}

			if(a[mid] < x){
					ans = a[mid];
					s = mid+1;
			}
			else{
				  e = mid-1;
			}
		}

		return ans;
}

int find_ceil(vector<int> &a, int n, int x){

		int s = 0;
		int e = n-1;

		int ans = -1;

		while(s<=e){

			int mid = (s+e)/2;

			if(a[mid] == x){
				return x;
			}

			if(a[mid] > x){
					ans = a[mid];
					e = mid-1;
			}
			else{
				  s = mid+1;
			}
		}

		return ans;

}

int main(){

    vector<int> arr = {3, 4, 7, 8, 8, 10};
    int n = arr.size();
    int x = 11;

    int floor = find_floor(arr,n,x);
	int ceil = find_ceil(arr,n, x);

	cout<<floor<<" "<<ceil<<endl;
}