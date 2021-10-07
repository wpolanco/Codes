public class BalancedArray {
    // this code is the solution of Geeks for Geeks Topic wise Practice of Array.
    //Problem Statement - Given an array of even size N, task is to find minimum value that can be added to an element so that array become balanced.
    // An array is balanced if the sum of the left half of the array elements is equal to the sum of right half.

    //since in GfG we don't need to take input or print anything so the code of just the Function
    // that was to be completed has been answered.

    long minValueToBalance(long[] a, int n) {

        long lSum = 0;
        long rSum = 0;
        for (int i = 0; i < n / 2; i++) {

            lSum += a[i];
        }
        for (int i = n / 2; i < n; i++) {
            rSum += a[i];
        }

        return Math.abs(lSum - rSum);
    }
}
