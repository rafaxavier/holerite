/*Programa criado no primeiro periodo da faculdade ,,,,programa faz a folha de pagamento com PROVIMENTOS (todos os valores q o empregado tem o direito de receber,
e a soma deles é o Salário Bruto: Salário, Hora Extra, 13º Salário, Férias, Adicional Noturno, Adicional
de Insalubridade, Adicional de Periculosidade, Descanso Semanal Remunerado, Abono, Salário Família.) 
e DESCONTOS(todos os valores q são deduzidos do Salário Bruto do empregado: INSS ,IRRF ,Contribuição Sindical, Contribuição
Assistencial, Faltas, Vale-Transporte, Vale-Alimentação. Após o desconto dos deveres dos empregados, temos o Salário Líquido:)
ENTRADA salario=s ,num de dependentes=nd ,horas extras=he ,adicional noturno=an ,adicional de insalubridade=ai ,
adicional de periculosidade=ap */

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	int qtdp;
	float s ,sb,he,vh, ac,hea,qthn,vthn,inss,valdp,bc,irrf;
	char an;
	
	cout<<"Informe o salario:";
	cin>>s;
	cout<<"\n""Informe qts horas extras foram feitas:";
	cin>>he;
		
		if (he>0)
		{
			vh=(s/220);
			ac=(vh/100)*50;
			hea=vh+ac;
			he=he*hea;
		}
		
		while (an!='s' && an!='S' && an!='n' && an!='N')
		{
		
		
			cout<<"\n""Tem adicional noturno? (s/n)"; 
			cin>>an;

	
			if (an=='s' || an=='S')
			{
				cout<<"\n""Informe qts horas noturnas :";
				cin>>qthn;
				vthn=(s/220);
				vthn=(vthn/100)*20;
				vthn=vthn*qthn;
			}
				else if (an=='n' || an=='N') 
				{
					vthn=0;
				}
					else
					{
						cout<<"\n""resposta invalida digite (s) ou (n)""\n";
					}
		}
		
			sb=he+vthn+s;
			
			if (sb<=1399.12)  //tabela do inss//
			{
				inss=(sb/100)*8;
			}
				else if (sb>=1399.13 && sb<=2331.88)
				{
					inss=(sb/100)*9;
				}
					else if (sb>=2331.89 || sb<=4663.75)
					{
						inss=(sb/100)*11;
					}
						if (sb>4663.75 )
						{
							inss=(4663.75/100)*11;
						}
	

	cout<<"\n""Informe qtd de dependentes :";
	cin>>qtdp;
	valdp=qtdp*189.59;
			
		
	bc=sb-inss-valdp;  //base de calculo para IRRF//
	
	
	if (bc<=1903.98)  //tabela do IRRF//
			{
				irrf=0;
			}
				else if (bc>=1903.99 && bc<=2862.65)
				{
					irrf=((bc/100)*7.5)-142.80;
				}
					else if (bc>=2862.66 || bc<=3751.05)
					{
						irrf=((bc/100)*15)-354.80;
					}
						else if (bc>=3751.06 || bc<=4664.68)
						{
							irrf=((bc/100)*22.5)-636.13;
						}
							if (bc>4664.68)
							{
								irrf=((bc/100)*27.5)-869.36;
							}
						
	
	
	cout<<"\n\n""                  HOLERITE";
cout<<"\n"" _______________________________________________";
cout<<"\n"" 	SALARIO INICIAL: "<<s;
cout<<"\n""|_______________________________________________|";
cout<<"\n"" 	HORAS EXTRAS: "<<he;
cout<<"\n""|_______________________________________________|";
cout<<"\n"" 	ADICIONAL NOTURNO: "<<vthn;
cout<<"\n""|_______________________________________________|";		
cout<<"\n"" 	SALARIO BRUTO: "<<sb;
cout<<"\n""|_______________________________________________|";
cout<<"\n"" 	BASE DE CALCULO: "<<bc;
cout<<"\n""|_______________________________________________|";
cout<<"\n"" 	INSS: -"<<inss;
cout<<"\n""|_______________________________________________|";
cout<<"\n"" 	IRRF: -"<<irrf;
cout<<"\n""|_______________________________________________|";
cout<<"\n"" 	DEPENDENTES: "<<valdp;
cout<<"\n""|_______________________________________________|";
cout<<"\n"" 	SALARIO LIQUIDO: R$"<<sb-inss-irrf;
cout<<"\n""|_______________________________________________|";

system ("pause>>null");
}

