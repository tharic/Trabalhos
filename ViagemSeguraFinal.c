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
    printf ("Escolha sua opçao:\n\n");
    printf ("\t1- Custo benefício: Etanol ou Gasolina\n");
    printf ("\t2- Viage com segurança\n");
    printf ("\t3- Rendimento do combustível\n");
    printf("\t4- Autonomia do Veículo\n");
    printf ("\t5- Sair\n\n");
    printf("Digite a opção do menu: ");
    scanf("%d", &opcao);

        switch(opcao){

        case 1://alcool em relação a gasolina

            system ("cls");//chama função abaixo
            CustoBeneficio();

            break;

        case 2://Revisão pela quilometragem(menu para escolha)

            system ("cls");
            CheckUpViagem();

            break;

        case 3://Rendimento por litro de combustível

            system ("cls");
            RendimentoLitro();

            break;

         case 4://Autonomia do combustível

            system ("cls");
            AutonomiaCombustivel();

            break;

        case 5://Sair

            printf("\n\n\n\t\t Muito obrigado.\n\n");

            break;

        default://validação

                printf("\n\t\tErro! Opção inválida!\n");
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
    printf("\n\t\tO etanol compensa até: R$ %.3f\n\t",valorDoEtanol);

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

    printf("\n\nO rendimento é de: %.2f km/litro.\n", rendimento);

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

    printf("\nDigite o Consumo médio do veículo (KM/L): ");
    scanf("%f", &cMedio);
    printf("\nDigite o valor do Litro da Gasolina: R$ ");
    scanf("%f", &lGasolina);
    printf("\nDigite o Valor Total Pago: R$ ");
    scanf("%f", &tPago);

    lAbastecidos = tPago / lGasolina;
    printf("\nVoce abasteceu: %.3f litros.\n",lAbastecidos);

    autonomiaGasolina = lAbastecidos * cMedio;
    printf("\nA autonomia do veículo é de: %.3f Km.\n", autonomiaGasolina);

    system("pause");
    system ("cls");
    fflush(stdin);
}

void CheckUpViagem(){

    int n=0, a=0;
    int viaja = 1;
    int naoViaja[16];

    printf("\n\n\t\tCHECKLIST PRÉ VIAGEM\n");
    printf("\n\t\tDigite S para sim e N para não ");

    printf("\n\n\t\t RODAS");

        printf("\n\t\t\t 01 - A pressão dos pneus está boa? ");
        VerificaCheck();
        printf("\n\t\t\t 02 - Os sulcos dos pneus estão bons? ");
        VerificaCheck();
        printf("\n\t\t\t 03 - O estepe está cheio e em bom estado? ");
        VerificaCheck();
        printf("\n\t\t\t 04 - As rodas estão em bom estado? ");
        VerificaCheck();
        printf("\n\t\t\t 05 - O carro está balanceado? ");
        VerificaCheck();

    printf("\n\n\t\t SUSPENÇÃO");

        printf("\n\t\t\t 06 - A suspenção está silenciosa? ");
        VerificaCheck();
        printf("\n\t\t\t 07 - O carro está alinhado? ");
        VerificaCheck();

    printf("\n\n\t\t FLUIDOS");

        printf("\n\t\t\t 08 - O nível do óleo está bom? ");
        VerificaCheck();
        printf("\n\t\t\t 09 - O nível da água do radiador está bom? ");
        VerificaCheck();
        printf("\n\t\t\t 10 - O nível do fluido do freio está bom? ");
        VerificaCheck();
        printf("\n\t\t\t 11 - O fluido da direção está bom? ");
        VerificaCheck();
        printf("\n\t\t\t 12 - O óleo de transmissão está bom? ");
        VerificaCheck();

    printf("\n\n\t\t SISTEMA ELETRICO");

        printf("\n\t\t\t 13 - Os faróis e setas estão acendendo normalmente? ");
        VerificaCheck();
        printf("\n\t\t\t 14 - As luzes do painel estão acendendo? ");
        VerificaCheck();

    printf("\n\n\t\t LIMPEZA DE PARABRISA");

        printf("\n\t\t\t 15 - As palhetas estão em bom estado? ");
        VerificaCheck();
        printf("\n\t\t\t 16 - Há água no reservatório de limpeza? ");
        VerificaCheck();



    for(a = 0; a < 16; a++)
        if(check[a] == 'N')
        {
            naoViaja[n] = a + 1;
            n++;
            viaja = 0;
        }


    for(a = 0; a < n; a++)
        printf("\n\n\t\t Não é seguro viagem pelo motivo da opção: %d\n\n", naoViaja[a]);

    if(viaja == 1)
        printf("\n\n\t\t Seu carro está seguro, tenha uma boa viagem.\n\n");

    system("\n\npause");

}

void VerificaCheck(){

    scanf("%s", &check[i]);

    while ((check[i] != 'S') && (check[i] != 'N')){
        printf("Erro: Digite s para sim ou n para não");
        scanf("%s", &check[i]);
    }

    i++;

}
