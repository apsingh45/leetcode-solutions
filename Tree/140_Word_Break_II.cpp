// Time Complexity - O(2^N)
// Space Complexity - O(N)

// Hard
// Leetcode - https://leetcode.com/problems/word-break-ii

class Node{
public:
    unordered_map<char,Node*>children;
    bool endofWord;

    Node(){
        endofWord = false;
    }
};

class Trie{
public: 
    Node* root;

    Trie(){
        root = new Node();
    }

    void insert(string key){
        Node* temp = root;

        for(int i = 0;i<key.size();i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }
        temp->endofWord = true;
    }

    bool search(string key){
        Node* temp = root;

        for(int i = 0;i<key.size();i++){
            if(temp->children.count(key[i]) == 0) return false;

            temp = temp->children[key[i]];
        }
        return temp->endofWord;
    }
};

class Solution {
public:
    vector<string> helper(string &s,int index,Trie &trie){
        vector<string> result;
        if(index == s.size()){
            result.push_back("");
            return result;
        }

        Node* temp = trie.root;

        for(int i = index;i < s.size();i++){
            char ch = s[i];
            if(temp->children.count(ch) == 0) break;
            temp = temp->children[ch];

            if(temp->endofWord){
                string word = s.substr(index,i-index+1);

                vector<string> rest = helper(s,i+1,trie);

                for(string r : rest){
                    if(r == "") result.push_back(word);
                    else result.push_back(word + " " + r);
                }
            }
        }
        return result;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        Trie trie;
        for(int i = 0;i<wordDict.size();i++){
            trie.insert(wordDict[i]);
        }
        return helper(s,0,trie);
    }
};