interface Test{
    int square(int n);
}

class Arithmetic implements Test{
    public int square(int n){
        return n * n;
    }
}

class ToTestInt{
    public void showSquare(int n){
        Arithmetic obj = new Arithmetic();
        System.out.println("Square of " + n + " = " + obj.square(n));
    }
}

class Outer{
    public void display(){
        System.out.println("Display method of outer class");
    }

    class Inner{
        public void display(){
            System.out.println("Display method of inner class");
        }
    }
}


class Point {
    private int x , y;

    //Default constructor
    public Point(){
        x = 0;
        y = 0;
    }

    //Parameterized constructor
    public Point(int x, int y){
        this.x = x;
        this.y = y;
    }

    public void setX(int x){
        this.x = x;
    }

    public void setY(int y){
        this.y = y;
    }

    public void setXY(int x, int y){
        this.x = x;
        this.y = y;
    }

    public void display(){
        System.out.println("Point = (" + x + ", " + y + ")");
    }
}


class Box {
    protected double length;
    protected double breadth;

    public Box(double length, double breadth){
        this.length = length;
        this.breadth = breadth;
    }

    public double area(){
        return length * breadth;
    }

    public void displayArea(){
        System.out.println("Area of Box = " + area());
    }
}

class Box3D extends Box {
    private double height;

    public Box3D(double length, double breadth, double height){
        super(length, breadth);
        this.height = height;
    }

    public double volume(){
        return length * breadth * height;
    }

    public void displayVolume(){
        System.out.println("Volume of Box3D = " + volume());
    }
}


//Main class
public class Assignment{
    public static void main(String[] args) {
        
        ToTestInt t = new ToTestInt();
        t.showSquare(5);

        Outer outer = new Outer();
        outer.display();

        Outer.Inner inner = outer.new Inner();
        inner.display();
        
        Point p1 = new Point(10 , 5);
        p1.display();

        Point p2 = new Point();
        p2.display();

        p2.setX(30);
        p2.setY(40);
        p2.display(); 

        p2.setXY(50, 60);
        p2.display();

        Box box = new Box(10,5);
        box.displayArea();

        Box3D box3d = new Box3D(10, 5, 4);
        box3d.displayArea();
        box3d.displayVolume();
    }
}
