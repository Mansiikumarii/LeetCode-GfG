class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>v;

        while(ss >> word) v.push_back(word);
        //jab tak ss word main kuch provide kar pa raha hai ss>>word

        string temp="";
        for(int i=v.size()-1; i>=0; i--){
            temp += v[i];
            if(i != 0) temp +=" ";
        }
        return temp;
    }
};