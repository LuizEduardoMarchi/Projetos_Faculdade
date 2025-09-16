algoritmo "semnome"
var
   veta:vetor [1..5, 1..5] de inteiro
   i,j:inteiro
inicio
   para i de 1 ate 5 faca
      para j de 1 ate 5 faca
         escreva("Digite um numero:")
         leia(veta[i,j])
         j<-j+1
      fimpara
      i<-i+1
   fimpara
   para i de 1 ate 5 faca
      para j de 1 ate 5 faca
         se(i<>j)entao
           escreva(veta[i,j],", ")
         fimse
      fimpara
      escreval()
   fimpara
fimalgoritmo