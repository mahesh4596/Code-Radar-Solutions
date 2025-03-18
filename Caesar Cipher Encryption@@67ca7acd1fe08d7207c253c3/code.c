char* caesarCipher(char msg[],int shift,int encrypted[])
{
    int i;
    for(i=0;i<100;i++)
        encrypted[i]=msg[i]+shift;
    return encrypted;
}