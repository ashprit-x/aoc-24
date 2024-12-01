#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main(){
    // visit places 
    // once visited mark with a star
    // must be in one of the first fifty places
    // help them get 50 stars on their list before santa takes off

    // the list of locations is currently empty
    // first check the Chief Historians Office
    // Chief Historian isn't there
    // we find historically significant locations listed by some ID
    // split into 2 groups each searching the office t
    // try to create their own complete list of location ids
    // looking at the 2 lists side by side 
    // the lists aren't similar.
    // reconcile the lists

    // finding how different two pairs of lists are
    // pair up the number and measure the distance
    // smallest l to smallest r
    // sum up all those distances 
    string pair;
    priority_queue<int, vector<int>, greater<int>> l1, l2;
    std::ifstream MyFile("day1.txt");

    std::string delim = "   ";

    while(getline (MyFile, pair)){

        istringstream iss(pair); // creates a stream  -> good for parsing
        int l, r;
        if(iss >> l >> r){ // reads into left then reads into right
            l1.push(l);
            l2.push(r);
        }
    }

    long long ans = 0;
    while(!l1.empty()){
        int one = l1.top(); 
        l1.pop();

        int two = l2.top(); 
        l2.pop();
        ans+= abs(one-two);
    }

    cout << "res = " << ans << endl;

    return 0;
}
