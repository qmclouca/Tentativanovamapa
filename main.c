#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct registro{
    int codCvm; //CODIGO CVM                                                                     1
    char cnpj[100]; //CNPJ                                                                       2
    char denSoc[100]; //DENOMINACAO SOCIAL                                                       3
    char denCom[100]; //COMERCIAL                                                                4
    char datReg[100]; //DATA DO REGISTRO                                                         5
    char datConst[100]; //DATA DA CONSTITUICAO                                                   6
    char datCancel[100]; //DATA DO CANCELAMENTO                                                  7
    char motCancel[100]; //MOTIVO DO CANCELAMENTO                                                8
    char sit[100]; //SITUACAO                                                                    9
    char inisit[100]; //INÍCIO DA SITUAÇÃO                                                       10
    char setatividade[100]; //SETOR DE ATIVIDADE                                                 11
    char tipomerc[100]; //TIPO DE MERCADO                                                        12
    char catreg[100]; //CATEGORIA DO REGISTRO                                                    13
    char datinicat[100]; //DATA INICIAL DA CATEGORIA                                             14
    char sitemissor[100]; //SITUAÇÃO DO EMISSOR                                                  15
    char datinisitemissor[100]; //DATA INICIAL DA SITUAÇÃO DO EMISSOR                            16
    char tipoend[100]; //TIPO DE ENDEREÇO                                                        17
    char logradouro[100]; //LOGRADOURO                                                           18
    char complemento[100]; //COMPLEMENTO                                                         19
    char bairro[100]; //bairro                                                                   20
    char municipio[100]; //municipio                                                             21
    char uf[2]; //UF                                                                             22
    char pais[100]; //PAIS                                                                       23
    char cep[100]; //cep                                                                         21
    char dddtel[100]; //DDD DO TELEFONE                                                          25
    char tel[100]; //telefone                                                                    26
    char dddfax[100]; //DDD do fax                                                               27
    char fax[100]; //fax                                                                         28
    char email[100]; //email                                                                     29
    char tiporesp[100]; //TIPO DE RESPONSÁVEL                                                    30
    char nomeresp[100]; //NOME DO RESPONSÁVEL                                                    31
    char datiniresp[100]; //DATA INICIAL DO RESPONSÁVEL                                          32
    char logresp[100]; //LOGRADOURO DO RESPONSÁVEL                                               33
    char compresp[100]; //COMPLEMENTO DO RESPONSÁVEL                                             34
    char bairroresp[100]; //bairro do responsável                                                35
    char munresp[100]; //MUNICÍPIO DO RESPONSÁVEL                                                36
    char ufresp[100]; //UF do RESPONSÁVEL                                                        37
    char paisresp[100]; //PAIS DO RESPONSÁVEL                                                    38
    char cepresp[100]; //CEP RESPONSÁVEL                                                         39
    char dddresp[100]; //DDD do telefone do responsável                                          40
    char telresp[100]; //telefone do responsável                                                 41
    char dddfaxresp[100]; //ddd do fax do responsável                                            42
    char faxresp[100]; //número do fax do responsável                                            43
    char emailresp[100]; //email do responsável                                                  44
    char cnpjauditor[100]; //CNPJ auditor                                                        45
    char auditor[100]; //nome do auditor                                                         46
}registro;

struct registro dados[2246]; //linhas no arquivo csv

/*mergesort inicio
void intercala(int *x, int inicio, int fim, int meio){
    int poslivre, inicio_v1, inicio_v2, i;
    int aux[fim];
    inicio_v1 = inicio;
    inicio_v2 = meio+1;
    poslivre = inicio;

    while (inicio_v1 <= meio && inicio_v2 <= fim){
        if (x[inicio_v1] <= x[inicio_v2]){
            aux[poslivre] = x[inicio_v1];
            inicio_v1 += 1;
        }else{
            aux[poslivre] = x[inicio_v2];
            inicio_v2 += 1;
        }
        poslivre++;
    }
    for (i = inicio_v1; i <= meio; i++){
        aux[poslivre] = x[i];
        poslivre++;
    }
    for (i = inicio_v2; i <= fim; i++){
        aux[poslivre] = x[i];
        poslivre++;
    }
    for (i = inicio; i <= fim; i++)
        x[i] = aux[i];
}

void merge(int *x, int inicio, int fim){
    int meio;
    if (inicio < fim){
        meio = (inicio+fim)/2;
        merge(x,inicio,meio);
        merge(x,meio+1, fim);
        intercala(x,inicio, fim, meio);
    }

}
 mergesort fim   */
void bubble_sort (registro vetor[], int n) {
    int k, j;
    struct registro aux;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j]. codCvm > vetor[j + 1].codCvm) { //mudei aqui
                aux = vetor[j];
                vetor[j]= vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void imprimirOriginal( registro *dados, int n){
    setlocale(LC_ALL,"Portuguese");
	int i;
	for(i=0;i<n;i++){
        printf("COD CVM: %d	", dados[i].codCvm);
        printf("CNPJ: %s ", dados[i].cnpj);
        printf("DENOMINAÇÃO SOCIAL: %s ", dados[i].denSoc);
        printf("DENOMINAÇÃO COMERCIAL: %s ", dados[i].denCom);
        printf("DATA DO REGISTRO: %s ", dados[i].datReg);
        printf("DATA DA CONSTITUIÇÃO: %s ", dados[i].datConst);
        printf("DATA DO CANCELAMENTO: %s ", dados[i].datCancel);
        printf("MOTIVO DO CANCELAMENTO: %s ", dados[i].motCancel);
        printf("SITUACAO: %s ", dados[i].sit);
        printf("INÍCIO DA SITUAÇÃO: %s ", dados[i].inisit);
        printf("SETOR DE ATIVIDADE: %s ", dados[i].setatividade);
        printf("TIPO DE MERCADO: %s ", dados[i].tipomerc);
        printf("CATEGORIA DO REGISTRO: %s ", dados[i].catreg);
        printf("DATA INICIAL DA CATEGORIA: %s ", dados[i].datinicat);
        printf("SITUAÇÃO DO EMISSOR: %s ", dados[i].sitemissor);
        printf("DATA INICIAL DA SITUAÇÃO DO EMISSOR: %s ", dados[i].datinisitemissor);
        printf("TIPO DE ENDEREÇO: %s ", dados[i].tipoend);
        printf("LOGRADOURO: %s ", dados[i].logradouro);
        printf("COMPLEMENTO: %s ", dados[i].complemento);
        printf("BAIRRO: %s ", dados[i].bairro);
        printf("MUNICÍPIO: %s ", dados[i].municipio);
        printf("UF: %s ", dados[i].uf);
        printf("PAIS: %s ", dados[i].pais);
        printf("CEP: %s ", dados[i].cep);
        printf("DDD DO TELEFONE: %s ", dados[i].dddtel);
        printf("TELEFONE: %s ", dados[i].tel);
        printf("DDD DO FAX: %s ", dados[i].dddfax);
        printf("FAX: %s ", dados[i].fax);
        printf("EMAIL: %s ", dados[i].email);
        printf("TIPO DE RESPONSÁVEL: %s ", dados[i].tiporesp);
        printf("NOME DO RESPONSÁVEL: %s ", dados[i].nomeresp);
        printf("DATA INICIAL DO RESPONSÁVEL: %s ", dados[i].datiniresp);
        printf("LOGRADOURO DO RESPONSÁVEL: %s ", dados[i].logresp);
        printf("COMPLEMENTO DO RESPONSÁVEL: %s ", dados[i].compresp);
        printf("bairro do responsável: %s ", dados[i].bairroresp);
        printf("MUNICÍPIO DO RESPONSÁVEL: %s ", dados[i].munresp);
        printf("PAIS DO RESPONSÁVEL: %s ", dados[i].paisresp);
        printf("CEP RESPONSÁVEL: %s ", dados[i].cepresp);
        printf("DDD do telefone do responsável: %s ", dados[i].dddresp);
        printf("telefone do responsável: %s ", dados[i].telresp);
        printf("ddd do fax do responsável: %s ", dados[i].dddfaxresp);
        printf("número do fax do responsável: %s ", dados[i].faxresp);
        printf("email do responsável: %s ", dados[i].emailresp);
        printf("CNPJ auditor: %s ", dados[i].cnpjauditor);
        printf("nome do auditor: %s \n\n", dados[i].auditor);
    	}
    	printf("\n");
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("f:\\rodolfo\\CVM_CIA_ABERTAS.csv","r+");
    if(arq == NULL){
        printf("Não abriu");
        return(1);
    }
    int tam = sizeof(arq)/(sizeof(int)+(sizeof(char[100])*44)+sizeof(char[2]));
	int tamanho = 2246;
	int countLinhas = 0;
	int contador = 0, it = 0, linha =0;
	char auxArquivo[1024];
	char buf[1024];

	while(fgets(buf,1024,arq)){
		contador = 0;
		countLinhas++;
		if(countLinhas == 1) continue;
		char *campo = strtok(buf, ";");
		while(campo){
            if(contador == 0)	{
				strcpy(auxArquivo,campo);
				dados[linha].codCvm = atoi(auxArquivo);
            }
			if(contador == 1){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].cnpj ,auxArquivo);
			}
			if(contador == 2){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].denSoc ,auxArquivo);
			}
			if(contador == 3){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].denCom ,auxArquivo);
			}

			if(contador == 4){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].datReg,auxArquivo);
			}
			if(contador == 5){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].datConst,auxArquivo);
			}

			if(contador == 6){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].datCancel,auxArquivo);
			}
			if(contador == 7){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].motCancel,auxArquivo);
			}
			if(contador == 8){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].sit,auxArquivo);
			}
			if(contador == 9){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].inisit,auxArquivo);
			}
			if(contador == 10){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].setatividade,auxArquivo);
			}
            if(contador == 11)	{
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].tipomerc, auxArquivo);
			}
			if(contador == 12)	{
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].catreg,auxArquivo);
			}
			if(contador == 13){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].datinicat,auxArquivo);
			}
            if(contador == 14){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].sitemissor,auxArquivo);
            }
            if(contador == 15){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].datinisitemissor,auxArquivo);
            }
            if(contador == 16){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].tipoend,auxArquivo);
            }
            if(contador == 17){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].logradouro,auxArquivo);
            }
            if(contador == 18){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].complemento,auxArquivo);
            }
            if(contador == 19){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].bairro,auxArquivo);
            }
            if(contador == 20){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].municipio,auxArquivo);
            }
            if(contador == 21){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].uf,auxArquivo);
            }
            if(contador == 22){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].pais,auxArquivo);
            }
            if(contador == 23){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].cep,auxArquivo);
            }
            if(contador == 24){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].dddtel,auxArquivo);
            }
            if(contador == 25){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].tel,auxArquivo);
            }
            if(contador == 26){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].dddfax,auxArquivo);
            }
            if(contador == 27){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].fax,auxArquivo);
            }
            if(contador == 28){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].email,auxArquivo);
            }
            if(contador == 29){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].tiporesp,auxArquivo);
            }
            if(contador == 30){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].nomeresp,auxArquivo);
            }
            if(contador == 31){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].datiniresp,auxArquivo);
            }
            if(contador == 32){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].logresp,auxArquivo);
            }
            if(contador == 33){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].compresp,auxArquivo);
            }
            if(contador == 34){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].bairroresp,auxArquivo);
            }
            if(contador == 35){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].munresp,auxArquivo);
            }
            if(contador == 36){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].ufresp,auxArquivo);
            }
            if(contador == 37){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].paisresp,auxArquivo);
            }
            if(contador == 38){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].cepresp,auxArquivo);
            }
            if(contador == 39){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].dddresp,auxArquivo);
            }
            if(contador == 40){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].telresp,auxArquivo);
            }
            if(contador == 41){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].dddfaxresp,auxArquivo);
            }
            if(contador == 42){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].faxresp,auxArquivo);
            }
            if(contador == 43){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].emailresp,auxArquivo);
            }
            if(contador == 44){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].cnpjauditor,auxArquivo);
            }
            if(contador == 45){
                strcpy(auxArquivo,campo);
                strcpy(dados[linha].auditor,auxArquivo);
            }

			campo = strtok(NULL,";");
			contador++;
		}
			linha++;
	}
    //merge(arq,0,tam-1);
	bubble_sort(dados,tamanho);
	imprimirOriginal(dados,tamanho);
	return(0);
}