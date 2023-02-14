import java.util.Scanner;
class q9 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int sum=0;
        for(int i=0;i<10;++i){
            sum+= sc.nextInt();
        }
        System.out.println("Sum : "+sum);
        System.out.println("Average : "+(sum/10));
        sc.close();
    }
}
