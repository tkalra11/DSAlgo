import java.util.Scanner;
class q8 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in) ;
        char ch=sc.next().charAt(0);
        switch(ch)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': System.out.println("Vowel");
            break;
            default:System.out.println("Consonant");
        }       
    }
}
