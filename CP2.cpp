#include<iostream>
using namespace std;
int spin(int num,string arr[]);

main(){
    int num=0;
    cout << "Enter how many elements you want to put : ";
    cin >> num;
    string arr[num];
    for(int i=0;i<num;i++){
        cout << "Element "<< i+1<< " ";
        cin >>arr[i];
    }
    int ans= spin(num,arr);
    cout << ans;
}
int spin(int num,string arr[]){
    int count=0;
    int c2=0;
    for(int i=0;i<num;i++){
        if(arr[i]=="right"){
            count++;
        }
        else if(arr[i]=="left"){
            c2++;
        }
        
    }
    int calc=(count*90)-(c2*90);
    calc=calc/360;
    return calc;
}