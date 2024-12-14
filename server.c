#include <signal.h>
#include <stdio.h>
#include <unistd.h>

// Função para tratar o sinal recebido
void print_signal(int signum)
{
    if (signum == SIGUSR1)
        printf("O sinal chegou!\n");
}

int main(void)
{
    // Obtém o PID do servidor
    int  my_pid = getpid();
    printf("PID DO SERVIDOR: %d\n", my_pid);

    // chama a função 
    signal(SIGUSR1, print_signal);

    // Mantém o servidor rodando
    while (1) {
        pause(); // Espera por sinais
    }

    return 0;
}
