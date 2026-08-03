class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN) return 0;
        long long copy=abs(static_cast<long long>(x));
        string n=to_string(copy);
        std::reverse(n.begin(),n.end());
        long long final=stoll(n);
        if(x<0) final=-final;
        if(final>INT_MAX || final<INT_MIN) return 0;

        return static_cast<int>(final);
    }
};