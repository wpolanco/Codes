import java.util.*;
public class duck_number {
    void check(int n){
        int f=0;
        while(n>0){
            int d=n%10;
            if(d==0){
                f=1;
                break;
            }
            n=n/10;
        }
        if(f==1){
            System.out.println("Duck number");
        }
        else{
            System.out.println("Not a Duck number");
        }
    }
    public static void main(String args[]){
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the number:");
        int n=sc.nextInt();
        duck_number ob=new duck_number();
        ob.check(n);
    }
}
