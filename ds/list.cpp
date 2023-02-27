//
// Created by DY on 2023/2/23.
//
#include "list.h"

List List();
void List::Push(bool front,string key,string value){
    if(!this->KeyExist()){
        this->record[key]=list<string>();
        this->table[key]=map<string,bool>();
    }
    if(front){
        this->record[key].push_back(value);
    }else{
        this->record[key].push_front(value);
    }
}
string List::Pop(bool front,string key){
    if(!this->KeyExist()){
        return "";
    }
    string e;
    if(front){
        e=this->record[key].front();
        this->record[key].pop_front();
    }else{
        e=this->record[key].back();
        this->record[key].pop_back();
    }
    this->table[key].erase(key);
    return e;
}

// remove n element same as  value from record[key]
void List::Remove(string key,string value,int n){
//    if(n==0){
//        for(string p:this->record[key]){
//
//        }
//    }
}
char[] List::Get(string,int){

}
void List::Put(string,char[],int){

}
bool List::KeyExist(string){

}
bool List::ValExist(string){

}
void List::Insert(string,int,int,char[]) {
}

list<string> List::GetAllKeys(string){

}