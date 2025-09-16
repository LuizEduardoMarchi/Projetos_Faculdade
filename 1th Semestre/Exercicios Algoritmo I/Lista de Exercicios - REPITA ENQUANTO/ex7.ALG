Algoritmo "Cubo e Raiz Cúbica com Enquanto"
Var
   n, cubo, raiz: Real
   cont: Inteiro
Inicio
   cont <- 1
   Enquanto cont <= 4 faca
      Escreva("Digite um numero qualquer: ")
      Leia(n)
      cubo <- n ^ 3
      raiz <- n ^(1/3)
      EscrevaL("O cubo de ", n, " é ", cubo)
      escreval("e sua raiz cúbica é ", raiz)
      cont <- cont + 1
   FimEnquanto
Fimalgoritmo