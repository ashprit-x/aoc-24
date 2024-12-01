#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
#include <map>
#include <set>

using namespace std;

int main(){
    // add up each number in the left list by multiplying the number of times it 
    // appears in the right list

    string pair;
    vector<int> l1, l2;
    std::ifstream MyFile("day1.txt");

    std::string delim = "   ";

    while(getline (MyFile, pair)){

        istringstream iss(pair); // creates a stream  -> good for parsing
        int l, r;
        if(iss >> l >> r){ // reads into left then reads into right
            l1.push_back(l);
            l2.push_back(r);
        }
    }
    long long ans = 0;

    set<int> left_set;
    unordered_map<int, int> map2;
    for(int i = 0; i<l1.size(); i++){
        left_set.insert(l1[i]);
        map2[l2[i]]++;
    }

    for(int elem : left_set){
        if (map2.find(elem) == map2.end())
            continue;
        ans += map2[elem]*elem;
    }


    cout << "res = " << ans << endl;

    return 0;
}
