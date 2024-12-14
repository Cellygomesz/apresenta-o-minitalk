# Variáveis
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRV = server
CLI = client

# Regras
all: $(SRV) $(CLI)

$(SRV): server.c
	@echo "Server compilado! ✅"
	@$(CC) $(CFLAGS) -o $(SRV) server.c

$(CLI): client.c
	@echo "Client compilado! ✅"
	@$(CC) $(CFLAGS) -o $(CLI) client.c

clean:
	@echo "🗑️ Deletado com sucesso! 🗑️"
	@rm -f $(SRV) $(CLI)

fclean: clean

re: fclean all

