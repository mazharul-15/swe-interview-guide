/*
    Author: Mazharul Islam
            CSE, HSTU

    Program: Trie Data Structure
*/

#include<iostream>

using namespace std;

struct Node {

    Node *links[26];
    bool flag = false;

    /// contain key
    bool contain_key(char ch) {

        return (links[ch-'a'] != NULL);
    }


    /// put character into trie
    void put(char ch, Node *node) {

        links[ch - 'a'] = node;
    }


    /// getting next links
    Node* get(char ch) {

        return links[ch-'a'];
    }


    /// sets the End
    void set_end() {

        flag = true;
    }


    /// end checking
    bool is_end() {

        return flag;
    }
};


class Trie {

    private:

        Node *root;

    public:

        Trie() {

            root = new Node();
        }

        /// inserting word into trie and TC: O(length of word)
        void insertWord(string word) {

            Node *node = root;
            for(int i = 0; i < word.length(); i++) {

                if(!node->contain_key(word[i])) {

                    node->put(word[i] , new Node());
                }

                node = node->get(ch);
            }

            node->set_end();
        }

        /// searching word into trie
        bool searching(string word) {

            Node* node = root;
            for(int i = 0; i < word.length(); i++) {

                if(!node->contain_key(word[i])) {
                    return false;
                }
                node = node->get(word[i]);
            }

            return node->is_end();
        }

        /// prefix searching into trie & TC: O(L)
        bool prefixSearching(string word) {

            Node* node = root;
            for(int i = 0; i < word.length(); i++) {

                if(!node->containe_key(word[i])) {

                    return false;
                }

                node = node->get(word[i]);
            }
            return true;
        }
};

int main() {



    return 0;
}
