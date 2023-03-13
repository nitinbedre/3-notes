package access_specifiers;
class Parent {
    protected void display() {
        System.out.println("display from parent");
    }
}

class Child extends Parent {
    protected void childDisplay() {
        System.out.println("display from parent");
    }
}

class GrandChild extends Child {
    protected void grandChildDisplay() {
        System.out.println("display from parent");
    }
}

public class TestAccess extends GrandChild {
    public static void main(String[] args) {
        int a=5;
        printf("%d,%d,%d,%d", a++ , ++a , a-- , a--);
    }
}
