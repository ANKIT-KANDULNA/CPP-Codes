#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
class TrieNode{
public:
    map<char,TrieNode*> children;
    bool endOfWord;
    TrieNode(){
        endOfWord=0; 
    }

};
class Trie{
    TrieNode *root;
public:
    Trie(){
        root=new TrieNode();
    }
    void insert(string s){
        TrieNode *curr=root;
        for(char c:s){
            if(curr->children.find(c)==curr->children.end()){
                curr->children[c]=new TrieNode();
            }
            curr=curr->children[c];
        }
        curr->endOfWord=1;
    }
    void insertRecursive(string s){
        InsertRecursive(root,s,0);
    }
    void InsertRecursive(TrieNode *curr,string s,int i){
        if(i==s.length()){
            curr->endOfWord=1;
        }
        if(curr->children.find(s[i])==curr->children.end()){
            curr->children[s[i]]=new TrieNode();
        }
        InsertRecursive(curr->children[s[i]],s,i+1);
    }
    bool search(string s){
        TrieNode *curr=root;
        for(char c:s){
            if(curr->children.find(c)==curr->children.end()){
                return 0;
            }
            curr=curr->children[c];
        }
        return curr->endOfWord;
    }
    bool searchRecursive(string s){
        return SearchRecursive(root,s,0);
    }
    bool SearchRecursive(TrieNode *curr,string s,int i){
        if(i==s.length()){
            return curr->endOfWord;
        }
        if(curr->children.find(s[i])==curr->children.end()){
            return 0;
        }
        return SearchRecursive(curr->children[s[i]],s,i+1);
    }
    void deleteWord(string s){
        DeleteWord(root,s,0);
    }
    bool DeleteWord(TrieNode *curr,string s,int i){
        if(i==s.length()){
            if(curr->endOfWord==0){
                return 0;
            }
            curr->endOfWord=0;
            return curr->children.empty();
        }
        if(curr->children.find(s[i])==curr->children.end()){
            return 0;
        }
        bool shouldDelete=DeleteWord(curr->children[s[i]],s,i+1);
        if(shouldDelete){
            delete curr->children[s[i]];
            curr->children.erase(s[i]);
            return curr->children.empty();
        }
        return 0;
    }
    void print(){
        printTrie(root,"");
    }
    void printTrie(TrieNode *curr,string prefix){
        if(curr->endOfWord){
            cout<<prefix<<endl;
        }
        for(auto it:curr->children){
            printTrie(it.second,prefix+it.first);
        }
    }
};
int main(){
    fastio();
    Trie trie;
    trie.insert("apple");
    trie.insert("app");
    trie.insert("banana");
    trie.print();
    return 0;
}