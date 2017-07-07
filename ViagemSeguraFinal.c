#include<stdio.h>
#include<locale.h>

void ChamaMenu ();
void CustoBeneficio ();
void RendimentoLitro();
void AutonomiaCombustivel();
void CheckUpViagem();
void VerificaCheck();

int i=0;

char check[16];

int main(){
    setlocale(LC_ALL, "Portuguese");
    ChamaMenu();
return 0;
}

void ChamaMenu (){
int opcao;

do{
    //system ("cls");

    printf ("\t\t -----Viagem Segura----- \n\n");//nome da empresa
    printf ("Escolha sua op�ao:\n\n");
    printf ("\t1- Custo benef�cio: Etanol ou Gasolina\n");
    printf ("\t2- Viage com seguran�a\n");
    printf ("\t3- Rendimento do combust�vel\n");
    printf("\t4- Autonomia do Ve�culo\n");
    printf ("\t5- Sair\n\n");
    printf("Digite a op��o do menu: ");
    scanf("%d", &opcao);

        switch(opcao){

        case 1://alcool em rela��o a gasolina

            system ("cls");//chama fun��o abaixo
            CustoBeneficio();

            break;

        case 2://Revis�o pela quilometragem(menu para escolha)

            system ("cls");
            CheckUpViagem();

            break;

        case 3://Rendimento por litro de combust�vel

            system ("cls");
            RendimentoLitro();

            break;

         case 4://Autonomia do combust�vel

            system ("cls");
            AutonomiaCombustivel();

            break;

        case 5://Sair

            printf("\n\n\n\t\t Muito obrigado.\n\n");

            break;

        default://valida��o

                printf("\n\t\tErro! Op��o inv�lida!\n");
                system ("pause");
                system ("cls");
                fflush(stdin);
            break;
        }
    }
    while(opcao != 5);

}

void CustoBeneficio (){

    float valorDoEtanol, valorDaGasolina;
    valorDoEtanol=0;

    printf("\n\t\tDigite o valor da Gasolina: R$ ");
    scanf("%f", &valorDaGasolina);

    valorDoEtanol = valorDaGasolina * 0.7;
    printf("\n\t\tO etanol compensa at�: R$ %.3f\n\t",valorDoEtanol);

    system ("pause");
    system ("cls");
    fflush(stdin);
}

void RendimentoLitro(){

    float rendimento, km, litros;

    printf("\n\nDigite a kilometragem rodada: ");
    scanf("%f", &km);
    printf("\n\nDigite quantos litros foram consumidos: ");
    scanf("%f", &litros);

    rendimento = km / litros;

    printf("\n\nO rendimento � de: %.2f km/litro.\n", rendimento);

    system("pause");
    system ("cls");
    fflush(stdin);
}

void AutonomiaCombustivel(){

    float cMedio, lGasolina, tPago, lAbastecidos, autonomiaGasolina;

    lAbastecidos = 0;
    autonomiaGasolina = 0;
    lGasolina = 0;
    tPago = 0;
    cMedio = 0;

    printf("\nDigite o Consumo m�dio do ve�culo (KM/L): ");
    scanf("%f", &cMedio);
    printf("\nDigite o valor do Litro da Gasolina: R$ ");
    scanf("%f", &lGasolina);
    printf("\nDigite o Valor Total Pago: R$ ");
    scanf("%f", &tPago);

    lAbastecidos = tPago / lGasolina;
    printf("\nVoce abasteceu: %.3f litros.\n",lAbastecidos);

    autonomiaGasolina = lAbastecidos * cMedio;
    printf("\nA autonomia do ve�culo � de: %.3f Km.\n", autonomiaGasolina);

    system("pause");
    system ("cls");
    fflush(stdin);
}

void CheckUpViagem(){

    int n=0, a=0;
    int viaja = 1;
    int naoViaja[16];

    printf("\n\n\t\tCHECKLIST PR� VIAGEM\n");
    printf("\n\t\tDigite S para sim e N para n�o ");

    printf("\n\n\t\t RODAS");

        printf("\n\t\t\t 01 - A press�o dos pneus est� boa? ");
        VerificaCheck();
        printf("\n\t\t\t 02 - Os sulcos dos pneus est�o bons? ");
        VerificaCheck();
        printf("\n\t\t\t 03 - O estepe est� cheio e em bom estado? ");
        VerificaCheck();
        printf("\n\t\t\t 04 - As rodas est�o em bom estado? ");
        VerificaCheck();
        printf("\n\t\t\t 05 - O carro est� balanceado? ");
        VerificaCheck();

    printf("\n\n\t\t SUSPEN��O");

        printf("\n\t\t\t 06 - A suspen��o est� silenciosa? ");
        VerificaCheck();
        printf("\n\t\t\t 07 - O carro est� alinhado? ");
        VerificaCheck();

    printf("\n\n\t\t FLUIDOS");

        printf("\n\t\t\t 08 - O n�vel do �leo est� bom? ");
        VerificaCheck();
        printf("\n\t\t\t 09 - O n�vel da �gua do radiador est� bom? ");
        VerificaCheck();
        printf("\n\t\t\t 10 - O n�vel do fluido do freio est� bom? ");
        VerificaCheck();
        printf("\n\t\t\t 11 - O fluido da dire��o est� bom? ");
        VerificaCheck();
        printf("\n\t\t\t 12 - O �leo de transmiss�o est� bom? ");
        VerificaCheck();

    printf("\n\n\t\t SISTEMA ELETRICO");

        printf("\n\t\t\t 13 - Os far�is e setas est�o acendendo normalmente? ");
        VerificaCheck();
        printf("\n\t\t\t 14 - As luzes do painel est�o acendendo? ");
        VerificaCheck();

    printf("\n\n\t\t LIMPEZA DE PARABRISA");

        printf("\n\t\t\t 15 - As palhetas est�o em bom estado? ");
        VerificaCheck();
        printf("\n\t\t\t 16 - H� �gua no reservat�rio de limpeza? ");
        VerificaCheck();



    for(a = 0; a < 16; a++)
        if(check[a] == 'N')
        {
            naoViaja[n] = a + 1;
            n++;
            viaja = 0;
        }


    for(a = 0; a < n; a++)
        printf("\n\n\t\t N�o � seguro viagem pelo motivo da op��o: %d\n\n", naoViaja[a]);

    if(viaja == 1)
        printf("\n\n\t\t Seu carro est� seguro, tenha uma boa viagem.\n\n");

    system("\n\npause");

}

void VerificaCheck(){

    scanf("%s", &check[i]);

    while ((check[i] != 'S') && (check[i] != 'N')){
        printf("Erro: Digite s para sim ou n para n�o");
        scanf("%s", &check[i]);
    }

    i++;

}
