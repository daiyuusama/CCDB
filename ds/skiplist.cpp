//
// Created by DY on 2023/2/24.
//
#include "skiplist.h"
#include "iostream"
#include "ctime"
#include "random"
using namespace std;
SkipListNode::SkipListNode(int k, string v, int level):key(k),value(v) {
    for(int i=0;i<level;i++){
        nxt.push_back(nullptr);
    }
}
SkipList::SkipList(string initValue) {
    head=new SkipListNode(minInt,initValue,MaxLevel);
    tail=new SkipListNode(maxInt,initValue,MaxLevel);
    for(int i=0;i<MaxLevel;i++){
        head->nxt[i]=tail;
    }
}

SkipList::~SkipList() {
    delete head;
    delete tail;
}

int SkipList::randomLevel() {
    int random_level=1;
    int seed=time(NULL);
    static default_random_engine e(seed);
    static uniform_int_distribution<int> u(0,1);

    while(u(e)&&random_level<MaxLevel){
        random_level++;
    }
    return random_level;
}

int SkipList::nodeLevel(vector<SkipListNode *> next) {
    int node_level=0;
    if(next[0]->key==maxInt){
        return node_level;
    }
    for(int i=0;i<next.size();i++){

    }
}

SkipListNode* SkipList::insert(int k, std::string v) {

}

SkipListNode *SkipList::find(int k) {

}

SkipListNode *SkipList::deleteNode(int k) {

}

int main(){
    cout<<"success to run!"<<endl;
    return 0;
}