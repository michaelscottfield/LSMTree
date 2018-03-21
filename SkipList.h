//
//  SkipList.h
//  
//
//  Created by mike on 2018/3/20.
//

#ifndef SkipList_h
#define SkipList_h

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

const int K = 3;//level number of the skip list
const int neginf = -1;
const int posinf = 65000;
class LinkNode
{
public:
    /*LinkNode(int kkey, LinkNode *nnext, LinkNode *llast)
    {
        key = kkey;
        next = nnext;
        last = llast;
    }*/

    int key;//
    LinkNode *next;
    LinkNode *last;
    
};

class LinkList{
public:
    //LinkNode head = LinkNode(neginf, null, null);
    LinkNode head;
    LinkNode tail;
    LinkList(){
        //LinkNode head;
        //LinkNode tail;
        head.key = neginf;
        tail.key = posinf;
        head.next = &tail;
        head.last = nullptr;
        tail.last = &head;
        tail.next = nullptr;
        //head = LinkNode(neginf, nullptr, nullptr);
        //tail = LinkNode(posinf, nullptr, nullptr);
        //head.key = neginf;
        //tail.key = posinf;
    }
    void InsertKey(){
        
    }
//private:
    
};

class SkipList{
public:
    LinkList *lists;
};

#endif /* SkipList_h */
