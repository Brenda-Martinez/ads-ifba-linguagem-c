#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int paciente;
    struct Node* proximo;
} Node;

typedef struct {
    Node* inicio;
    Node* fim;
} Fila;

void inicializar(Fila* fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

void adicionar(Fila* fila, int paciente) {
    Node* novo = (Node*) malloc(sizeof(Node));
    novo->paciente = paciente;
    novo->proximo = NULL;
    if (fila->fim != NULL) {
        fila->fim->proximo = novo;
    } else {
        fila->inicio = novo;
    }
    fila->fim = novo;
}

int remover(Fila* fila) {
    if (fila->inicio == NULL) {
        printf("ERRO!\a Fila vazia.");
        exit(1);
    }
    Node* primeiro = fila->inicio;
    int paciente = primeiro->paciente;
    fila->inicio = primeiro->proximo;
    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }
    free(primeiro);
    return paciente;
}

void visualizar(Fila* fila) {
    if (fila->inicio == NULL) {
        printf("Nenhum paciente agendado!\n");
        return;
    }
    Node* atual = fila->inicio;
    while (atual != NULL) {
        printf("%d ", atual->paciente);
        atual = atual->proximo;
    }
    printf("\n");
}

void salvar(Fila* fila, char* nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "w");
    if (arquivo == NULL) {
        printf("ERRO!\a Nao foi possivel abrir o arquivo.");
        exit(1);
    }
    Node* atual = fila->inicio;
    while (atual != NULL) {
        fprintf(arquivo, "%d\n", atual->paciente);
        atual = atual->proximo;
    }
    fclose(arquivo);
}

int main() {

    Fila hospital;
    inicializar(&hospital);
    int opcao, paciente;

    while (1) {
        printf("======  ENFERMARIA DO IFBA  ======\n\n");
        printf("Escolha uma opcao:\n");
        printf("1 - Agendar consulta\n");
        printf("2 - Atender\n");
        printf("3 - Conferir proximos pacientes\n");
        printf("4 - Salvar agenda em um arquivo txt\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite um numero para identificacao do paciente: ");
                scanf("%d", &paciente);
                adicionar(&hospital, paciente);
                printf("Consulta do paciente %d agendada.\n", paciente);
                system("pause");
                system("cls");
                break;
            case 2:
                paciente = remover(&hospital);
                printf("Paciente %d atendido.\n", paciente);
                system("pause");
                system("cls");
                break;
            case 3:
                printf("Aguardando atendimento . . .");
                printf("\n===============================\n");
                visualizar(&hospital);
                printf("===============================\n");
                system("pause");
                system("cls");
                break;
            case 4:
                salvar(&hospital, "fila_de_espera.txt");
                printf("===============================\n");
                printf("\aSUCESSO AO SALVAR A AGENDA.\n");
                printf("===============================\n");
                system("pause");
                system("cls");
                break;
            case 5:
                exit(0);
            default:
                printf("\aOpcao invalida.\n");
                system("pause");
                system("cls");
                break;
        }
    }
    return 0;
}

