
public class LambdaExpressinPractice implements FunctionalInterface1{
    public static void main(String[] args) {
        FunctionalInterface obj = (msg) -> System.out.println(msg);
        obj.displayMessage("Welcome to the lambda expression");
    }

    @Override
    public void displayMessage1(String message) { // override method then creat object and then call it. alternative is use Lambda expression,
        System.out.println(message);   
    }    
}

interface FunctionalInterface {
    void displayMessage(String message);
}

interface FunctionalInterface1 {
    void displayMessage1(String message);
}
