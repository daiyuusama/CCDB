//
// Created by DY on 2023/2/23.
//
#ifndef C_CRASK_LIST_H
#define C_CRASK_LIST_H
#include <map>
#include <string>
#include <list>
#define BYTE unsigned char
using namespace std;
class List{
    private:
        map<string,vector<string>> record;
        map<string,map<string,bool> table;
    public:
        List List();
        void Push(bool,string,list<string>);
        string Pop(bool,string);
        void Remove(string,string,int);
        string Get(string,int);
        void Put(string,string,int);
        bool KeyExist(string);
        bool ValExist(string);
        void Insert(string,int,int,string)
        list<string> GetAllKeys(string);

};










#endif //C_CRASK_LIST_H
