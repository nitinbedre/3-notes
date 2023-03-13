import java.util.Arrays;
import java.util.List;

public class StreamsTesting {
    public static void main(String[] args) {
        int array[] = {10, 20, 30, 40, 50};
        List list = Arrays.asList(array);
        list.stream().map(item -> item*item).collect(Collection.List);
    }
}