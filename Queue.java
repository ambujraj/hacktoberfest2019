import java.util.ArrayList;

public class Queue {
	
	static void addToQueue(ArrayList<Integer> queue, int item) {
		queue.add(item);
	}
	
	static void removeFromQueue(ArrayList<Integer> queue) {
		queue.remove(0);
	}
	
	static int findItemLinear(ArrayList<Integer> queue, int item) {
		for (int i = 0; i < queue.size(); i++) {
			if (queue.get(i) == item) {
				System.out.println("The position of '"+item+"' is: "+queue.indexOf(item));
				return queue.indexOf(item);
			}
		}
		System.out.println("The item could not be found.");
		return -1;
	}
	
	static void sortBubble(ArrayList<Integer> queue) {
		for (int i = 0; i < (queue.size() - 1); i++) {
			for (int j = 0; j < (queue.size() - 1); j++) {
				if (queue.get(j) > queue.get(j+1)) {
					int temp = queue.get(j);
					queue.set(j, queue.get(j+1));
					queue.set((j+1), temp);
				}				
			}
		}
	}
	
	
	public static void main(String[] args) {
	}

}
