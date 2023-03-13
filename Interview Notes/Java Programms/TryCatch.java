class TryCatch {
    public static void main(String[] args) {
        System.out.println("your call is in main method:");
        int value = getValue();
        System.out.println("your call is in main method:"+ value);
    }

    public static int getValue() {
        System.out.println("your call is in getValue");
        try {
            return 0;
        } catch(Exception e) {
            return 1;
        } finally {
            return 2;
        }
    }
}

/*
 * 
 * 
 */