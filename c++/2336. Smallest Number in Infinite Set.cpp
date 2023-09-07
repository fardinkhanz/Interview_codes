class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        if(added.empty())
        {
            return cur++;
        }
        const int min= *added.begin();
        added.erase(*added.begin());
        return min;
        
    }
    
    void addBack(int num) {
        if(cur>num)
        {
            added.insert(num);

        }
       
       
        
    }

   private:
     int cur=1;
     set<int> added;
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
