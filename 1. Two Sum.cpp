#include <iostream>
#include <vector>
class Algo {
public:
    std::vector<int> test(std::vector<int>& nums, int target)
    {
        int ans = 0; // Initialize ans
        int a, b;
        std::vector<int> final;
        for(int i = 0; i < nums.size(); i++) {
            for(int x = i + 1; x < nums.size(); x++) {
                ans = nums[i] + nums[x];
                if(ans ==  target){
                    a = i;
                    b = x;
                    break;
                }
                
            }
            if(ans ==  target){
                std::cout << "Index i: " << a << "\nIndex x: " << b << "\n";
                std::cout << "Solve: " << ans<<"\n";
                break;
            }
        }
        final.push_back(a);
        final.push_back(b);
        return final;
    }
};


int main()
{
    Algo a;
    std::vector<int> myNums = {3,2,4};
    int target = 6;
    std::vector<int> sumoftwo = a.test(myNums, target);
    std::cout << sumoftwo[0] << " + " << sumoftwo[1] << " = " << target;
    return 0;
}
