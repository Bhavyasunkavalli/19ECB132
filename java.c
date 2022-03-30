class overloading
{
   void area (floatx)
{
   system.out.println("the area of the squre is"+math.pow(x,2)+" sq units");
   
} 
  void area (double x)
{
     doulble z=3.14* x* x;
      system.out.println("the area of the cricle is "+z+" sq units");
 
  }  
}
 class overload 
{    
      public stastic void main(string args[])
   { 
     overloaddemo ob = new overloaddemo();
      ob.area(5);
      ob.area(11,12):
      ob.area(2.5);
     }
 }  

  
  