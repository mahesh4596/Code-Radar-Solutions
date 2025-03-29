int nextPrimeDigit(int digit) 
{
    if (digit < 2) return 2;
    else if (digit < 3) return 3;
    else if (digit < 5) return 5;
    else if (digit < 7) return 7;
    else return 7;
}

int incrementToPrimeDigits(int num) 
{
    int result = 0, place = 1;

    while (num > 0) 
    {
        int digit = num % 10;
        int newDigit = nextPrimeDigit(digit);
        result = result + (newDigit * place);
        place *= 10;
        num /= 10;
    }
    return result;
}