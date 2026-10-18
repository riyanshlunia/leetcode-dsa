class Solution {
public:
    vector<int> partitionLabels(string s) {

        vector<int> partitions;
        
        int i = 0;
        
        while(i<s.length()){
            int start = i;
            int end = s.rfind(s[start]);

            for (int j = start + 1; j <= end; j++) {
                int lastIndexOfNextChar = s.rfind(s[j]);

                if (lastIndexOfNextChar > end) {
                    end = lastIndexOfNextChar;
                }
            }

            partitions.push_back(end - start + 1);
            
            i = end + 1;

        }
        return partitions;
    }
};