char* caesarCipher(char msg[],int shift,char encrypted[])
{
    for(int i=0;i<100;i++)
        encrypted[i]=msg[i]+shift;
    return encrypted;
}