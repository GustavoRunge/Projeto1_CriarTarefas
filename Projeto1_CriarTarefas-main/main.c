#include "projeto.h"
#include <stdio.h"> // arrumado  de "" para <>

int main(){
ListaDeTarefas lt; //#variavel

char arquivo[] = "tarefas";
int codigo, opcao;


if(codigo !=0){
    printf("Lista de tarefas nao carregada");  //Arrumar para dentro do if utiliando o tab 
    lt.qtd=2; //#atribui ao membro lt(lista de tarefas)-- trazendo para dentro do if
}

do{ //#repetição
exibeMenu();
scanf("%d", &opcao);

if(opcao == 0){
    printf("Sair do Programa") //faltou código aqui para se caso for verdadeiro o que deve fazer, então foi adicionado que o printf dele é para "Sair do Programa" 
}
else if(opcao == 1){
    codigo=criarTarefa(&lt);
}
else if (opcao == 2  ){ //mudei o nome codigo para opcao
    codigo=carregarTarefas(lt, arquivo); // trouxe essa linha que estava perdida lá em cima
}
else if(opcao==3){//adicionado o else if para criar a lógica de outra opção e mudar o o nome codigo para opcao
    printf("Erro ao criar tarefa: Sem espacao disponivel\n");//---------------------VER-------------------
}
else if(opcao == 4){ //trocado a opcao = 2 para igual a 4
    codigo=deletarTarefa(&lt);
    if (codigo ==1 & NULL ) //adcionado aqui a variavel da logica NULL para avaliar se possui algum dado e se caso não houver apresenta a mensagem.
    printf("Erro ao deletar tarefa: Nao existem tarefas para deletar\n");
    else(codigo ==2) //Faltou a chave para abrir | e foi organizado o else if para somente else e colocar junto com a condição do else if (opcao == 4).
    //Falta aqui a lógica de como ver a posição inválida para dar a mensagem de erro ao deletar 
    printf("Erro ao deletar tarefa: posicao invalida\n");
} //acrecentou essa chave para fechar a logica do else if que estava faltando.
 

else if(opcao == 5){ // Mudando para opção = 5 para ser a ultima opção trazendo a lógica de listar
    codigo=listarTarefas(&lt);
   if (codigo == 1 & NULL) //fazer para que o codigo == 1 ele lista as tarefas e se caso for NULL então traz a mensagem de erro para listar
   printf("Erro ao listar tarefas: nao existem tarefas para serem listadas");
}



else if(opcao == 4){//adicionar a condição else if adicionando a opção de se caso apertar 4 irá ser destinada a salvar  tarefas e organizar o espacamento da logica do else if que não estava sendo inserido no novo else if.
    codigo=salvarTarefas(&lt,arquivo);
    if(codigo ==1 & NULL) //fazer para que o codigo == 1 adicionado a lógica do NULL para se caso não tiver nada ele aparece a mensagem do erro.
    printf("Erro ao salvar tarefas em arquivo");
}


else { //trazer para o final como a ultima opção e se caso não der nenhum dessas opçõesa cima trazer a mensagem como "opcao inválida"
	printf("opcao invalida\n");
}

system ("pause");

}
