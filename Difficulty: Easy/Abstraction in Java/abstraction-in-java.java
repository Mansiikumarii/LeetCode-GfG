// User function Template for Java
//  Implement both the classes here
abstract class Shape{
    String color;
    public Shape(String color){
        this.color = color;
    }
    public String getColor(){
        return color;
    }
    abstract double getArea();
}
class Square extends Shape{
    double side;
    public Square(String color, double side){
        super(color);
    this.side = side;
    }
    @Override
public double getArea(){
        return side*side;
    }
        
};
