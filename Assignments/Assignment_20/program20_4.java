class Logic
{
    void findLargestDigit(int num)
    {
        int largestDigit = 0;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit > largestDigit)
            {
                largestDigit = digit;
            }
            num = num / 10;
        }
        System.out.println("The largest digit is: " + largestDigit);
    }
}

class program20_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}