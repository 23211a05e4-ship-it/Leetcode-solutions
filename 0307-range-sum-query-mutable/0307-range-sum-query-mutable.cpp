class NumArray {
public:
    int n;
    vector<int>seg;
    void hlp1(vector<int>& nums,vector<int>& seg,int idx,int l,int r){
        if(l == r){
            seg[idx] = nums[l];
            return;
        }
        int mid = (l+r)/2;
        hlp1(nums,seg,2*idx+1,l,mid);
        hlp1(nums,seg,2*idx+2,mid+1,r);
        seg[idx] = seg[2*idx+1]+seg[2*idx+2];
    }
    void hlp2(vector<int>& seg,int idx,int pos,int val,int l,int r){
        if(l == r){
            seg[idx] = val;
            return;
        }
        int mid = (l+r)/2;
        if(pos <= mid) hlp2(seg,2*idx+1,pos,val,l,mid);
        else hlp2(seg,2*idx+2,pos,val,mid+1,r);
        seg[idx] = seg[2*idx+1]+seg[2*idx+2];
    }
    int hlp3(vector<int>& seg,int idx,int qst,int qend,int l,int r){
        if(qst > r || qend < l) return 0;
        if(l >= qst && r <= qend) return seg[idx];
        int mid = (l+r)/2;
        return hlp3(seg,2*idx+1,qst,qend,l,mid)+hlp3(seg,2*idx+2,qst,qend,mid+1,r);
    }
    NumArray(vector<int>& nums) {
        n = nums.size();
        seg.assign(4*n,0);
        hlp1(nums,seg,0,0,n-1);
    }

    void update(int pos, int val) {
        hlp2(seg,0,pos,val,0,n-1);
    }
    
    int sumRange(int left, int right) {
        return hlp3(seg,0,left,right,0,n-1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */