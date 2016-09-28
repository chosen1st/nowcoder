#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int num;
    while(scanf("%d",&num) != EOF){
        bool number[65536]={0};
        unsigned int temp;
        for(int i=0; i < num ; i ++){
            cin >> temp;
            number[temp]=true;
        }
        for(unsigned int i=0; i <65535 ; i++){
            if(number[i]){
                cout << i << endl;
            }
        }
    }
    return 0;
}
添加笔记
