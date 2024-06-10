class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[nuts[i]]++;
            mp[bolts[i]]++;
        }
        int i=0;
        vector<char>arr={'!','#','$','%','&','*','?','@','^'};
        for(auto x:arr){
            if(mp.find(x)!=mp.end()){
                nuts[i]=x;
                bolts[i]=x;
                i++;
            }
        }
        return ;
    }
};

/*
    Given a set of n nuts & bolts. There is a one-on-one mapping between nuts and bolts. You have to Match nuts and bolts efficiently. Comparison of a nut to another nut or a bolt to another bolt is not allowed. 
    It means the nut can only be compared with the bolt and the bolt can only be compared with the nut to see which one is bigger/smaller.
    The elements should follow the following order: { !,#,$,%,&,*,?,@,^ }
    Note: Make all the required changes directly in the given arrays, output will be handled by the driver code.

    Examples
    Input: n = 5, nuts[] = {@, %, $, #, ^}, bolts[] = {%, @, #, $ ^}
    Output: 
    # $ % @ ^
    # $ % @ ^
    Explanation: As per the order # should come first after that $ then % then @ and ^. 

    Input: n = 9, nuts[] = {^, &, %, @, #, *, $, ?, !}, bolts[] = {?, #, @, %, &, *, $ ,^, !}
    Output: 
    ! # $ % & * ? @ ^
    ! # $ % & * ? @ ^
    Explanation: We'll have to match first ! then  # , $,  %,  &,  *,  @,  ^,  ? as per the required ordering.

    T.C : O(n)
*/
