class StaticPractice {
    String studentName;
    String StudentAddress;
    static String collegeId;

    {
        System.out.println("This is non static block"+ this.studentGrade);
        staticMethod();
    }
    static {
        System.out.println("this is static block"+StaticPractice.collegeName);
        staticMethod();
    }

    StaticPractice() {
        System.out.println("this is constructor: collegeName: "+ collegeName+"studentGrade"+ this.studentGrade);
    }

    static void staticMethod() {
        System.out.println("static method called..."+ collegeId);
    }
    public static void main(String[] args) {
        new StaticPractice();
    }

    static String collegeName = "V.P";
    String studentGrade = "A";
}