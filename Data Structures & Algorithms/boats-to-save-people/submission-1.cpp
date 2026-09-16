class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());

        int count=0;
        int i=0,j=people.size()-1;

        while(i<j){
            if(people[i]+people[j] <= limit){
                count++;
                people[i]=0;
                people[j]=0;
                i++;
                j--;
            }
            else{
                j--;
            }
        }

        for(int i=0;i<people.size();i++){
            if(people[i]!=0){
                count++;
            }
        }
        return count;
    }
};