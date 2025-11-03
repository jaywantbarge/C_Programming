class Logic
 {
    void countFactors(int num)
     {
        int count = 0;
        for (int i = 1; i <= num; i++) 
        {
            if (num % i == 0)
             {
                count++;
            }
        }
        System.out.println("Total factors of " + num + " is: " + count);
    }
}
class program21_5
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}