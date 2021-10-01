import java.util.*;

public class LongestConsecutiveSubsequence
{
    private static int findLongestConseqSubseq(ArrayList<Integer> list, int n)
    {
        // Optimized Solution (O(N) solution)
        Collections.sort(list);
        int count = 0;
        int nextNumber = list.get(0);
        for (int i = 0; i < n; i++) {
            if (list.get(i) == nextNumber) {
                count++;
                nextNumber++;
            }
        }
        return count;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }
        System.out.println(findLongestConseqSubseq(list, n));
    }
}
