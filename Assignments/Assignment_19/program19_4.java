class Logic
{
    void printDigits(int num)
    {
        if (num == 0)
         {
            System.out.println(0);
            return;
        }

        int temp = num;
        int reversedNum = 0;

        while (temp != 0) 
        {
            int digit = temp % 10;
            reversedNum = reversedNum * 10 + digit;
            temp /= 10;
        }

        while (reversedNum != 0)
         {
            System.out.println(reversedNum % 10);
            reversedNum /= 10;
        }
    }
}

class program19_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}