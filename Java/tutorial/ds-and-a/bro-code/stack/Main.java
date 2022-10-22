import java.util.Stack;

public class Main {
  public static void main(String[] args) {

    // Stack - LIFO Data Structure, Last in First Out
    // stores objects in a vertical tower
    // push() to add to the top
    // pop() to remove from the top

    Stack<String> stack = new Stack<String>();

    stack.push("Minecraft");
    stack.push("osu!");
    stack.push("Crash Bandacoot");
    stack.push("Assassin's Creed");

    System.out.println(stack.empty());
  }
}
