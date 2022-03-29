class Solution{
public:
	string removeDuplicates(string str) {
	    string s;
	    for(int i=0;i<str.length();i++){
	        if(s.find(str[i])==-1)
	            s.push_back(str[i]);
	    }
	    return s;
	}
};
