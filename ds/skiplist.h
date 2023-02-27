//
// Created by DY on 2023/2/24.
//
#ifndef C_CRASK_SKIPLIST_H
#define C_CRASK_SKIPLIST_H
#include <string>
#include "vector"
#include <limits>

using namespace std;

const int MaxLevel=32;
const float Probability=0.25;
const int minInt=numeric_limits<int> :: min();
const int maxInt=numeric_limits<int> :: max();
const int GE=0;
const int Le=1;

//template<typename T>
struct SkipListNode{
    int key;
    string value;
    vector<SkipListNode*> nxt;
    SkipListNode(int k,string v,int level);
};

class SkipList{
public:
    SkipListNode* head;
    SkipList(string initValue);
    ~SkipList();
    int randomLevel();
    SkipListNode* insert(int k,string v);
    SkipListNode* find(int k);
    SkipListNode* deleteNode(int k);
private:
    SkipListNode* tail;
    int nodeLevel(vector<SkipListNode*> p);
//  void printNode();
};


#endif //C_CRASK_SKIPLIST_H
