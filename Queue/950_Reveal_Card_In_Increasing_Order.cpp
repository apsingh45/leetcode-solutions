// Time Complexity - O(N log M)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/reveal-cards-in-increasing-order

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end(),greater<int>());

        deque<int>q;
        q.push_front(deck[0]);

        for(int i = 1;i<deck.size();i++){
            int a = q.back();
            q.pop_back();
            q.push_front(a);
            q.push_front(deck[i]);
        }
        int i = 0;
        while(!q.empty() && i < deck.size()){
            deck[i] = q.front();
            q.pop_front();
            i++;
        }
        return deck;

    }
};