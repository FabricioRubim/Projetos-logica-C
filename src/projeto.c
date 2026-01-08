#include <stdio.h>
#include <string.h>

    struct banco
    {
        char nome[100];
        double dinheiroNaConta;
        double dinheiro_na_carteira;
        double deposito;
        char cartao[15];
        int senha;
        double limiteDedeposito;
    };
    
int main()
{
    
    struct banco p1 = {"Jonathan luiz", 1.600, 1.200, 500, "Mastercard", 1234, 1.000};

    char cartaodigitado[15];
    printf("Coloque seu cartão ");
    scanf("%s", cartaodigitado);

    int senhadigitada;
    printf("Digite sua senha: ");
    scanf("%d", &senhadigitada);

    // Condições para verificar o cartão e a senha

    if(strcmp(cartaodigitado, p1.cartao) == 0){
        printf("Cartão reconhecido\n");
    }
    else{
        printf("Cartão não reconhecido\n");
    }

    if(senhadigitada == p1.senha){
        printf("Entrou na conta\n");
        
    }
    else{
        printf("Senha incorreta\n");

    }

    // Vai verificar se o deposito que foi feito é menor que o limite do deposito 
    
    if (p1.deposito < p1.limiteDedeposito)
    {
        printf("Deposito de %.2f foi aceito\n",  p1.deposito);
    }
    else{
        printf("Deposito negado\n");
    }
    
    // Calculo de deposito
    p1.dinheiroNaConta += p1.deposito;
    p1.dinheiro_na_carteira -= p1.deposito;
    printf("Jonathan luiz tem %.2fR$ em sua carteira", p1.dinheiro_na_carteira);
    printf("Dinheiro na conta atualizado para %.2fR$", p1.dinheiroNaConta);

    return 0;
}