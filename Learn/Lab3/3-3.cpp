//
// Created by 梅书豪 on 2022/5/12.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Input n:";
    cin >> n;

    int nums[n];
    map<int, int> map1;
    set<int> set1;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        set1.insert(nums[i]);
    }
    sort(nums, nums + n);
    for (int i = 0; i < n; i++) {
        map1[nums[i]]++;
    }

    for (set<int>::iterator i = set1.begin(); i != set1.end(); i++) {
        printf("%d occurs %d times\n", *i, map1[*i]);
    }
}