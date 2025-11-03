class Logic
 {
    void calculatePower(int base, int exp)
     {
    
        int result = 1;        System.out.println("The result is: " + result);

        for (int i = 1; i <= exp; i++) 
        {
            result = result * base;
        }
    }
}

class program19_5 
{
    public static void main(String args[])
     {
        Logic obj = new Logic();
        obj.calculatePower(2, 5); 
    }
}