#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

map<string,string> mm;
char data[40];
char str1[20],str2[20];

int main() {
    mm.clear();
    while(gets(data) != NULL) {
        if(data[0] == '\0')
            break;
        int i;
        for(i=0; i<strlen(data); i++) {
            if(data[i] == ' ')
                break;
            str1[i] = data[i];
            str1[i+1] = '\0';
        }
        i++;
        int now = 0;
        for(;i<strlen(data);i++) {
            str2[now++] = data[i];
            str2[now] = '\0';
        }
        mm[str2] = str1;
    }

    while(scanf("%s",data) != EOF){
        if(mm.count(data))
            cout<<mm[data]<<endl;
        else
            printf("eh\n");
    }
    return 0;
}
