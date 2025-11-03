class Logic
{
    void findSmallestDigit(int num)
    {
        int smallestDigit = num % 10;
        int rem = 0;
        
        while(num > 0)
        {
            rem = num % 10;
            if(rem < smallestDigit)
            {
                smallestDigit = rem;
            }
            num = num / 10;
        }
        System.out.println("Smallest digit is: " + smallestDigit);
    }

}
class program20_5

{

public static void main(String args[])

{

Logic obj = new Logic();

obj.findSmallestDigit(45872);

}

}