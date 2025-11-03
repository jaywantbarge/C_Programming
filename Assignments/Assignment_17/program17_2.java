class Logic
 {
    void checkPalindrome(int num) 
    {
        int originalNum = num;
        int reversedNum = 0;

        while (num != 0) 
        {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num /= 10;
        }

        if (originalNum == reversedNum) {
            System.out.println(originalNum + " is a palindrome number.");
        } else {
            System.out.println(originalNum + " is not a palindrome number.");
        }
    }
}

class program17_2
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}