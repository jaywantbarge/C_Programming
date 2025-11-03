class Logic 
{
    void productOfDigits(int num)
     {
        int product = 1;
        while (num > 0) 
        {
            int digit = num % 10;
            product = product * digit;
            num = num / 10;
        }
        System.out.println("The product of the digits is: " + product);
    }
}

class program21_1 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}