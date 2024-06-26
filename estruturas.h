#ifndef ESTRUTURAS_H_INCLUDED
#define ESTRUTURAS_H_INCLUDED

#define LIMITE_MAX_MEMBROS 200
#define LIMITE_MAX_NOME 50
#include "funcoesGerais.h"

typedef struct  // INICIO Estrutura Tipo Teste
{
    char designacaoTeste[MAXSTRING];
    int tipoDeTeste; // 1 - Antigenio 2 - PCR
    tipoData dataTeste;
    int numUtenteSaude;
    int resultado; // -1 nao realizado , 0 - Negativo ; 1 - Positivo ; 2 - Inconclusivo
    tipoHora horaColheita;
    int duracaoMinutos;

} tipoTeste; //FIM Estrutura Tipo Teste

typedef struct // INICIO Estrutura Membro Comunidade Academica
{

    int numUtenteSaude;
    char nome[LIMITE_MAX_NOME];
    int tipoMembro; // 1 - Estudante 2 - Docente 3 - Técnico
    int anoNascimento;
    int estadoConfinamento;  //0 - não confinado , 1 - quarentena , 2 - isolamento profilatico
    int estadoVacina; //0 - Nao Vacinado 1 - Primeira Dose 2 - Segunda Dose 3 - Terceira Dose
    tipoData dataUltimaVacina;
    int quantTestesAgendados;
    int quantTestesRealizados;
    tipoData dataConfinamento;
    int duracaoConfinamentoDias;
    int ultimoConfinamento;


} tipoMembroCAcademica; // FIM Estrutura Membro Comunidade Academica




#endif // ESTRUTURAS_H_INCLUDED
