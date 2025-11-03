class Logic
{
    void printDivisibleBy2and3(int n)
    {
        for (int i = 1; i <= n; i++)
         {
            if (i % 6 == 0)
             {
                System.out.println(i);
            }
        }
    }
} 

class program21_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}