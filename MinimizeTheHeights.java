import java.util.*;

public class MinimizeTheHeights
{
    private static int minimizeTheHeightsSolution(ArrayList<Integer> list, int k, int n)
    {
        int minDiff = 0;
        Collections.sort(list);

        int first = list.get(0) + k;
        int last = list.get(n-1) - k;
        minDiff = last-first;

        return minDiff;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int n = sc.nextInt();
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }

        System.out.println(minimizeTheHeightsSolution(list, k, n));
    }
}
