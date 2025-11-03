class Logic
{
    void checkEvenOdd(int num)
    {
        
        if (num % 2 == 0)
    {
            System.out.println(num + " is an even number.");
        } else
        
        {
            System.out.println(num + " is an odd number.");
        }
    }
}
 class program16_2

{

public static void main(String args[])

{

Logic obj = new Logic();

obj.checkEvenOdd(7);

}

}