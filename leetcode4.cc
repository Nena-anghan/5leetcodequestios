vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
    }

    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

    for (const auto& pair : freqMap) {
        minHeap.push({pair.second, pair.first});
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top().second);
        minHeap.pop();
    }

    reverse(result.begin(), result.end());  
    return result;
}
