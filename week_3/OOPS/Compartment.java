import java.util.Random;

//abstract class
abstract class Compartment{
  public abstract String notice();
}

class FirstClass extends Compartment{
  @Override
  public String notice(){
    return "Welcom to First Class Compartment";
  }
}

class Ladies extends Compartment{
  @Override
  public String notice(){
    return "Reserved for Ladies";
  }
}

class General extends Compartment{
  @Override
  public String notice(){
    return "General Compartment - Open for All Passengers";
  }
}

class Luggage extends Compartment{
  @Override
  public String notice(){
    return "Luggage Compartment - Goods Only";
  }
}

public class TestCompartment{
  public static void main(String[] args){

    Compartment[] compartments = new Compartment[10];
    Random random = new Random();

    //create 10 random compartment
    for(int i = 0; i < compartments.length; i++){

      int choice = random.nextInt(4) + 1;

      switch(choice){
        case 1:
          Compartment[i] = new FirstClass();
          break;

        case 2:
          Compartment[i] = new Ladies();
          break;

        case 3:
          Compartment[i] = new General();
          break;

        case 4:
          Compartment[i] = new Luggage();
          break;
   }
}

// Demonstrate polymorphism
System.out.println("Compartments and their notices:\n");

for (int i = 0; i < compartments.length; i++) {
            System.out.println("Compartment " + (i + 1) + ":" + compartments[i].notice());
        }
    }
}
    






