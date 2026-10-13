
/**
 * // This is the MountainArray's API interface.
 * class MountainArray {
 * public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int binarySearch(MountainArray& arr, int target,
                     int left, int right, bool ascending) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int val = arr.get(mid);

            if (val == target) {
                return mid;
            }

            if (ascending) {
                if (val < target)
                    left = mid + 1;
                else
                    right = mid - 1;
            } else {
                if (val < target)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        }

        return -1;
    }

    int findInMountainArray(int target, MountainArray& mountainArr) {
        int n = mountainArr.length();
        int left = 0, right = n - 1;

        // 1. Find the peak index
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        int peak = left;

        // 2. Search the increasing side first
        int result = binarySearch(
            mountainArr, target, 0, peak, true
        );

        if (result != -1) {
            return result;
        }

        // 3. Search the decreasing side
        return binarySearch(
            mountainArr, target, peak + 1, n - 1, false
        );
    }
};
