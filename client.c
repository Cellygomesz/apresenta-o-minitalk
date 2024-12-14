#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{   
    // Obtém o PID do servidor a partir do argumento
    int server_pid = atoi(argv[1]);

    // Envia o sinal SIGUSR1 ao servidor
    kill(server_pid, SIGUSR1);
    
    return 0;
}
