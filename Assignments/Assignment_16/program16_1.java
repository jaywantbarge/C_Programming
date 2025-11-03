class Logic
{
    void calculateSum(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++) 
        {
            sum += i;
        }
        System.out.println("The sum of the first " + n + " natural numbers is: " + sum);
    }
}

class program16_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}