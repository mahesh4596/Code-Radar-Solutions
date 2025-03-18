char *caeserCipher(char msg[],int shift,int encrypted[])
{
    int count=0;
    for(int i=0;i<100;i++)
        encrypted[i]=msg[i]+shift;
    return encrypted;
}