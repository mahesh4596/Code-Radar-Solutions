char compressed(char str[],int compressed[])
{
    int n = strlen(str);
    int count = 1;
    for(int i=0;i<n;i++)
    {
        if(str[i] == str[i-1])
        {
            count++;
        }
        else 
        {  
            compressed[index++] = str[i - 1];  
            index += printf(&compressed[index], "%d", count);
            count = 1;
        }  

    }
}