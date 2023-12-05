#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row = 3;
    int col=3;
    int arr[row][col]={{0,1,1},{1,1,1},{1,1,0}};
    vector<bool> r(row,false);
    vector<bool> c(col,false);
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==0){
                r[i]=true;      
                c[j]=true;
            }
        }
    }
  //set row zero
  for(int i=0;i<row;i++){
    if(r[i]==true){
        for(int j=0;j<col;j++){
            arr[i][j]=0;
        }
    }
  }
        //set column zero
   for(int j=0;j<col;j++){
    if(c[j]==true){
        for(int i=0;i<row;i++){
            arr[i][j]=0;
        }
    }
  }

  //output
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}







// #include<iostream>
// using namespace std;
// int main(){
//     int row=3;
//     int col=3;
//     int arr[3][3]={{1,1,1},{1,1,1},{1,1,0}};
//     int idx=0;
//     int jdx=0;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]==0){
//                 idx=i;              //count idx and jdx
//                 jdx=j;
//                 break;
//             }
//         }
//     }
//     //operation genarate
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(i==idx || j==jdx){
//                 arr[i][j]=0;
//             }
//         }
//     }
//     //output
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }