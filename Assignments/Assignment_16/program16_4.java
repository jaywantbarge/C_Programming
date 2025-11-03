class Logic
{
    void reverseNumber(int num)
    {
        int reversedNumber = 0;
        while (num != 0)
        {
            int digit = num % 10;
            reversedNumber = reversedNumber * 10 + digit;
            num = num / 10;
        }
        System.out.println("Reversed number is: " + reversedNumber);
    }
}

class program16_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}