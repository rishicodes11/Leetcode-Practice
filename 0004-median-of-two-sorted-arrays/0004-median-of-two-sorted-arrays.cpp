class Solution {
    //BETTER
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total_size=nums1.size()+nums2.size();
        int index1=total_size/2;
        int index2=total_size/2 -1;
        int el1,el2;
        int count=0;
        int first=0,second=0;
        while(first<nums1.size() && second<nums2.size()){
            if(count>index1) break;
            if(nums1[first]<=nums2[second]){
                if(count==index1) el1=nums1[first];
                if(count==index2) el2=nums1[first];
                count++;
                first++;
            }
            else{
                if(count==index1) el1=nums2[second];
                if(count==index2) el2=nums2[second];
                count++;
                second++;
            }
        }
        while(first<nums1.size()){
            if(count==index1) el1=nums1[first];
            if(count==index2) el2=nums1[first];
            first++;
            count++;
            if(count>index1) break;
        }
        while(second<nums2.size()){
            if(count==index1) el1=nums2[second];
            if(count==index2) el2=nums2[second];
            second++;
            count++;
            if(count>index1) break;
        }
        if(total_size % 2!=0) return el1;
        else{
            return el1/2.0 + el2/2.0;
        }

        
        return -1;
    }
};