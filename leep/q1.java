import java.util.Scanner;
class q1
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println("Before\na : "+a+"\nb : "+b);
        a=a+b;
        b=a-b;
        a=a-b;
        System.out.println("After\na : "+a+"\nb : "+b);
        sc.close();
    }
}