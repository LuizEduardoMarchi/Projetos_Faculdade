algoritmo "semnome"
var
   nome,sexo:caractere
   idade,i:inteiro
inicio
   para i de 1 ate 20 faca
      escreva("Informe seu nome:")
      leia(nome)
      escreva("Informe a idade:")
      leia(idade)
      escreva("Informe O sexo, (1)masculino ou (2)Feminino:")
      leia(sexo)
      se((sexo=1)e(idade>21))entao
         escreva("O Seu Nome é:",nome)
      fimse
      i<-i+1
   fimpara
fimalgoritmo