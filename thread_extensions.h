
char* thread_name(pthread_t tid)
{
    char* pcName = malloc(20);
    memset(pcName, 0, 20);

    sprintf(pcName, "0X%x", tid);
    return pcName; 
}
