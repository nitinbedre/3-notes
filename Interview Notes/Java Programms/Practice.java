import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Vector;

public class Practice {

	public static void main(String[] args) throws FileNotFoundException {
		//  List list = new Vector<>();
        //  List list = new ArrayList<>();
		File file = new File("not_existing_file.txt");
		FileInputStream stream = new FileInputStream(file);
            List list = new LinkedList<>();
	        list.add(1);
	        list.add(6);         
	        list.add(2);
	        list.add(3);
	        list.add(4);
	        System.out.println(list);
	        // list.remove(2);
	        printList(list);
	        Collections.reverse(list);
	        printList(list);
	    }    

	    public static void printList(List list) {
	        Iterator itr = list.iterator();
	        System.out.println();
	        while(itr.hasNext()) {
	            System.out.print("--> "+itr.next());
	        }
	    }

}
