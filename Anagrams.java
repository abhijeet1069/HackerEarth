import java.util.Set;
import java.util.HashSet;
import java.util.Scanner;

class Anagrams{
	static Scanner input = new Scanner(System.in);
  public static void main(String[] args) {
    
	Set<Character> a = new HashSet<Character>();
    Set<Character> b = new HashSet<Character>();
    Set<Character> intersect = new HashSet<Character>();
    Set<Character> union = new HashSet<Character>();
    
    int test = Integer.parseInt(input.nextLine()); //input.nextInt() causes problem with next string input
    while(test > 0) {
    	
    String str1 = input.nextLine();
    String str2 = input.nextLine();
    
    for(char x : str1.toCharArray())
    	a.add(x);
    for(char y : str2.toCharArray())
    	b.add(y);
    
    intersect = new HashSet<Character>(a);
    union = new HashSet<Character>(a);
  
    union.addAll(b);
    intersect.retainAll(b);   
    test--;
    }
    System.out.println(union.size() - intersect.size());
  }
}