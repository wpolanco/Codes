public class twoDArray {
    public static void main(String args[])
    {
        int d[][]={
            {1,2,3,4,5},
            {100,99,98,97,96},
            {50,51,52,53,54}
        };

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<5;j++)
            {
                System.out.print(" "+d[i][j]);
            }
            System.out.println();
        }

        for(int j[]:d)
        {
            for(int k:j)
            {
                System.out.print(" "+k);
            }
            System.out.println();
        }
    }
}
