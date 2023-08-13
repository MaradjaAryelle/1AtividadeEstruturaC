#include <iostream>

using namespace std;

void questao1();
void questao2();
void questao3();
void questao4();
void questao5();
void questao6();
void questao7();
void questao8();
void questao9();
void questao10();
void questao11();
void questao12();
void questao13();
void questao14();
void questao15();

int main() {
    int questao;
    questao = -1;

    while (questao != 0) {
        cout << "Digite um numero de 1 a 15 para ir a questao ou 0 para sair: ";
        cin >> questao;

		switch (questao){
			case 1:
				questao1();
				break;
				
			case 2:
				questao2();
				break;
				
			case 3:
				questao3();
				break;
				
			case 4:
				questao4();
				break;
			
			case 5:
				questao5();
				break;
				
			case 6:
				questao6();
				break;
				
			case 7:
				questao7();
				break;
				
			case 8:
				questao8();
				break;
				
			case 9:
				questao9();
				break;
				
			case 10:
				questao10();
				break;
				
			case 11:
				questao11();
				break;
				
			case 12:
				questao12();
				break;
				
			case 13:
				questao13();
				break;
				
			case 14:
				questao14();
				break;
			
			case 15:
				questao15();
				break;
			
			case 0:
                cout << "TCHAU" << endl;
                break;
            default:
                cout << "Questao inexistente!" << endl;
                break;
		}
	}
	return 0;
}
		
		
void questao1(){
	cout << "1. Escreva um Programa que mostre a mensagem 'Ola mundo!'' na tela." << endl;
    cout << "Ola, mundo!" << endl;
}

void questao2(){
	cout << "2. Escreva um Programa que peca um número ao usuario e mostre o numero digitado na tela" << endl;
	int numero;
	cout << "Digite um numero: ";
	cin >> numero;
	cout << "O numero digitado foi " << numero << endl;
}

void questao3(){
	cout << "3. Escreva um Programa que peca dois numeros ao usuario e mostre a soma." << endl;
   	int numero1;
    int numero2;
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero:";
    cin >> numero2;
    cout << "A soma dos numeros eh " << numero1+numero2 << endl;	
}

void questao4(){
	cout << "4. Escreva um Programa que peca as 4 notas bimestrais e mostre a media." << endl;
	float nota;
	float somatorio;
    cout << "Digite a primeira nota: ";    
    cin >> nota;
    somatorio += nota;
    cout << "Digite a segunda nota: ";    
    cin >> nota;
    somatorio += nota;
    cout << "Digite a terceira nota: ";    
    cin >> nota;
    somatorio += nota;
    cout << "Digite a quarta nota: ";    
    cin >> nota;
    somatorio += nota;
    cout << "A média eh " << somatorio/4 << endl;
}

void questao5(){
	cout << "5. Escreva um Programa que peca uma quantidade de metros ao usuario e converta para centimetros. " << endl;
    float metragem;
	cout << "Digite o valor em metros:";
	cin >> metragem;
	cout << metragem << " metros equivale a "<< metragem*100<< " centimetros"<< endl;
}

void questao6(){
    cout << "6. Escreva um Programa que peca o raio de um circulo ao usuario, calcule e mostre sua area." << endl;
	float raio;
	cout << "Digite o valor do raio: ";
	cin >> raio;
    cout << "A area da circunferencia e "<< 3.14*raio*raio << endl;  
}

void questao7(){
	cout << "7. Escreva um Programa que calcule a area de um quadrado e em seguida mostre o dobro do resultado para o usuario." << endl;
    float lado;
    cout << "Digite o valor do lado: ";
    cin >> lado;
	cout << "O dobro da area do quadrado eh " << lado*lado*2 << endl;
}

void questao8(){
	cout << "8. Escreva um Programa que calcule e mostre o salario do mes do usuario." << endl;
	int horasTrabalhadas;
	float valorHora;
	cout << "Digite a quantidade de horas trabalhadas no mes: ";
	cin >> horasTrabalhadas;
	cout << "Digite o valor da hora de trabalho: ";
	cin >> valorHora;
    cout << "O salario nesse mes sera de R$" << horasTrabalhadas*valorHora << endl;
}

void questao9(){
	cout << "9. Escreva um Programa que peca a temperatura em graus Farenheit, transforme e mostre em graus Celsius." << endl;
    float farenheit;
    cout << "Digite a temperatura em Farenheit: ";
    cin >> farenheit;
    cout << farenheit << " Farenheit equivale a " << (farenheit - 32)/1.8 << " graus Celsius." << endl;    
}

void questao10(){
	cout << "10. Escreva um Programa que peca a temperatura em graus Celsius, transforme e mostre em graus Farenheit." << endl;
    float celsius;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;
    cout << celsius << "graus Celsius equivale a " << (celsius *(9/5))+32 << " Farenheit." << endl; 
}

void questao11(){
	cout << "11. Sabendo que o valor do dolar americano eh 4,80, escreva um Programa que peca o salario \n"
		"    de um desenvolvedor em dolar e converta para reais." << endl;
	float salario;
	cout << "Digite seu salario em dolar: ";
	cin >> salario;
    cout << "Seu salario convertido eh R$ " << salario*4.8 << endl;
}

void questao12(){
	cout << "12. Escreva um Programa que peca ao usuario os dados de altura e calcule o peso ideal.\n"
		"    Utilize: (72,7 * h) - 58 para homens e (62,1 * h) – 44,7 para mulheres." << endl;
	int genero;
	float altura;
	cout << "Digite sua altura em metros: ";
	cin >> altura;
	cout << "Qual seu genero biologico? (1 - Feminino; 2 - Masculino)";
	cin >> genero;
	if (genero == 1) {
		cout << "Seu peso ideal eh " << (62.1 * altura) - 44.7 << endl; 
	}
	else if (genero == 2) {
		cout << "Seu peso ideal eh " << (72.7 * altura) - 58 << endl; 
	}
	else{
		cout << "Opcao invalida. " << endl;
	}
}

void questao13(){
	cout << "13. Escreva um Programa que pergunte quanto voce ganha por hora e o numero de horas trabalhadas no mes.\n"
		"    Calcule e mostre o total do seu salário no referido mes, sabendo-se que são descontados:\n"
		"    11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato." << endl;
	int horasTrabalhadas;
	float valorHora;
	cout << "Digite a quantidade de horas trabalhadas no mes: ";
	cin >> horasTrabalhadas;
	cout << "Digite o valor da hora de trabalho: ";
	cin >> valorHora;
    cout << "Seu salario liquido eh de R$ "<< horasTrabalhadas*valorHora*0.76 << endl;
    //como todos os descontos sao em cima do salario bruto, somei a porcentagem dos descontos, que deu 0.24
}

void questao14(){
	cout << "14. Faca um programa que imprima na tela a tabuada de 1 a 9." << endl;
	for (int j = 1; j <=9; j++){
		cout << "Tabuada do " << j << endl;
		for(int i = 0; i <= 10; i++){
			cout << j << " x " << i << " = " << i*j << endl;
		}
	}
}

void questao15(){
	cout << "15. Faça um Programa para uma loja de tintas. \n"
		"    O programa devera pedir o tamanho em metros quadrados da area a ser pintada. \n"
		"    Considere que a cobertura da tinta eh de 1 litro para cada 3 metros quadrados \n"
		"    e que a tinta eh vendida em latas de 18 litros, que custam R$ 80,00. \n"
		"    Informe ao usuario a quantidades de latas de tinta a serem compradas e o preco total." << endl;
	float area;
	cout << "Digite a area a ser pintada em metros quadrados: ";
	cin >> area;
	float litros = area/3;
	int latas = litros/18;
	if (litros>latas*18 ){
		latas += 1;
	}
    cout << "Você precisara de "<< latas << "lata(s) de tinta e gastara R$" << latas * 80 << endl;
}
