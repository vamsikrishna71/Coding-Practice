int adjacentElementsProduct(std::vector<int> inputArray) {
    int ans = INT_MIN;

    for (int i = 0; i < inputArray.size() - 1; i++)
        ans = max(ans, inputArray[i] * inputArray[i+1]);

    return ans;
}
