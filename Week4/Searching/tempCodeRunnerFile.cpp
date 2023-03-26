int peakElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1]) // we are in Line A of graph , Search for peak in right
        {
            start = mid + 1;
        }
        else
        {
            // here we maybe at peak or in line B of graph
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end; // can also return start
}