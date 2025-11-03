class Logic
{
    void findMin(int a, int b, int c)
    {
    
        if (a < b)
         {
            if (a < c)
             {
                System.out.println("The minimum number is: " + a);
            } else
             {
                System.out.println("The minimum number is: " + c);
            }
        } else
         {
            if (b < c) 
            {
                System.out.println("The minimum number is: " + b);
            } else
             {
                System.out.println("The minimum number is: " + c);
            }
        }
    }
}

class program17_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}