#include<iostream>
#include<strings.h>
using namespace std;
const string word = "WUB";
int main()
{
    string remix;
    cin >> remix;
    /* finds pattern of word in remix returns its index if found else returns npos(predefined constant) whose value is -1 */
    while(remix.find(word)!= string::npos){
             if(remix.find(word) != 0){
         cout << remix.substr(0,remix.find(word)) << " ";
         remix.erase(0,remix.find(word));
        }
            remix.erase(remix.find(word),3);
           }
         cout << remix;
}

