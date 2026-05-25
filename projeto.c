#include <stdio.h>

int main()
{

    int idade;
    float temperatura;
    int faltaAr;

    printf("=== Sistema Simples de Prioridade de Atendimento ===\n");

    printf("Informe a idade do paciente: ");
    scanf("%d", &idade);

    printf("Informe a temperatura corporal: ");
    scanf("%f", &temperatura);

    printf("Possui falta de ar? (1 = Sim / 0 = Nao): ");
    scanf("%d", &faltaAr);

    printf("\n=== RESULTADO ===\n");

    if (temperatura >= 39.0 || faltaAr == 1)
    {
        printf("Prioridade ALTA de atendimento.\n");
    }
    else if (idade >= 60 || temperatura >= 37.5)
    {
        printf("Prioridade MODERADA de atendimento.\n");
    }
    else
    {
        printf("Prioridade BAIXA de atendimento.\n");
    }

    return 0;
}
