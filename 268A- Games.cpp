#include<iostream>
using namespace std;
int main()
{
        int n;
        cin >> n;
        int arr[2*n][2];
        for(int i = 0; i < n ; i ++){
                cin >> arr[i][0] >> arr[i][1];
                  arr[n+i][0]=arr[i][0];
                  arr[n+i][1]=arr[i][1];
                 }
        int counti = 0;
        int j = 0;
        while(j<n){
           for(int i = j+1 ;i < n+j ; i++){
             if(arr[j][0]==arr[i][1])
                  counti++;
                     }
                   j++;
        }
          cout << counti ;
}
