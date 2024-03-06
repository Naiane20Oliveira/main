# include <stdio.h>
# include <locale.h>


void media_atual(char nome [], float p1, float p2, float atividades){
    float media;
    if(p1<p2){
        printf("Insira novamente nota da p1: ");
        scanf("%f", &p1);
    } else {
        printf("Insira novamente nota da p2: ");
        scanf("%f", &p2);
    }
    media = p1*0.35 + p2*0.35 + atividades; 
    
    if(media>=6){
        printf("Aluno %s aprovado com media %.2f", nome, media);
    } else {
        printf("Aluno %s reprovado - media %.2f", nome, media);
    }

}

void media(char nome[], float p1, float p2, float atividades){
    float media;
    media = p1*0.35 + p2*0.35 + atividades;
    if (media>=6){
        printf("Aluno %s aprovado com media %.2f", nome, media);
    } else {
        media_atual(nome, p1, p2, atividades);
    }
}

void notas(){
    char nome [15];
    float p1, p2, atividades;

    printf("Nome do aluno: ");
    gets(nome);
    fflush(stdin);
    printf("Nota da p1: ");
    scanf("%f", &p1);
    printf("Nota da p2: ");
    scanf("%f", &p2);
    printf("Nota das atividades: ");
    scanf("%f", &atividades);
    media(nome, p1, p2, atividades);
}

int main(){
    notas();
}
