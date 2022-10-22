import java.util.*;

public class Main {
  public static void main(String[] args) {

    Queue<String> queue = new LinkedList<>();

    queue.offer("Minecraft");
    queue.offer("Borderlands");
    queue.offer("FIFA");
    queue.offer("World of Warcraft");


      queue.poll();
      queue.poll();
      queue.poll();

  }
}
