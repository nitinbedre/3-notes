class FinalTesting extends Parent1{

    FinalTesting() {
        System.out.println("child class constructor");
    }

    public static void main(String[] args) throws UserDefinedException, InterruptedException {   
        System.out.println("Thread "+Thread.currentThread().getId());
        FinalTesting objj = new FinalTesting();
        objj.finalClassMethod();
        System.out.println("terminated normally..");
    }
}

class UserDefinedException extends Exception {
    UserDefinedException(String s) {
        System.out.println(s);
    }
}

class FinalTesting1 extends Thread {
    int finalVar1;
    int finalVar2;
    int finalVar3;
    int finalVar4;

    // FinalTesting1() {
    //     System.out.println("parent class constructor");
    // }

    // FinalTesting1(int finalVar1) {
    //     System.out.println("parent class property set"+ this.finalVar1);
    //     this.finalVar1 = finalVar1;
    //     System.out.println("parent class property set"+ finalVar1);
    // }

    public void run () {
        for(int i = 0 ; i < 10; i++) {
            System.out.println("FinalTesting1 Thread id on line 38 is: "+Thread.currentThread().getId());
        }
    }

    final void finalClassMethod() throws UserDefinedException, InterruptedException {
        System.out.println("Thread "+Thread.currentThread().getId());

        for(int i = 0 ; i < 10; i++) {
            System.out.println("Thread is on line 47 is: "+Thread.currentThread().getId());
            Thread thread = new Thread(new FinalTesting1());
            thread.start();
            thread.sleep(1000);
            
        }
        System.out.println("out side of catch");
    }
}

class Parent1 extends FinalTesting1{

}

