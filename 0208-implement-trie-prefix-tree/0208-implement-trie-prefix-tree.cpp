class TrieNode {
public:
    TrieNode* v[26];
    bool isend;
    TrieNode() {
        for(int i=0;i<26;i++)
        {
            v[i] = NULL;
        }
        isend = 0;    
    }
};

class Trie {
private:
    TrieNode* node;
public:

    Trie() {
        node = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* cur = node;
        for(auto i:word)
        {
            if(cur->v[i-'a'] == NULL) {
                cur->v[i-'a'] = new TrieNode();
                
            }
            cur = cur->v[i-'a'];
        }
        cur->isend = 1;
    }
    
    bool search(string word) {
        TrieNode* cur = node;
        for(auto i:word)
        {
            if(cur->v[i-'a'] == NULL) {
                return false;
            }
            cur = cur->v[i-'a'];
        }
        return cur->isend;
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur = node;
        for(auto i:prefix)
        {
            if(cur->v[i-'a'] == NULL) {
                return false;
            }
             cur = cur->v[i-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */