// // merging two arrays

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// // void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
// // {
// // }


// ----------------------------------------------------------------------------------------------------------------------------

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int j=0;
        if(m==0)
            nums1[0]=nums2[0];
        for(int i=m;i<nums1.size();i++){
            
                cout << i <<endl;
                nums1[i]= nums2[j++];
            
        }
        sort(nums1.begin(),nums1.end());
}


    
char returnChar(const string &s){
    int start=0;
    int end=s.length()-1;
    
        for (int j = 0; j < s.length()-1; j++)
        {
            if (s[j] == s[j+1])
            {
                return s[j];
            }
        }
            
        
    return '\0';
        
    

}

int main()
{
   cout<< returnChar("Adidtya");
    return 0;
}