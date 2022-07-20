/****************************************************************************************
        Trabalho de Tópicos Especiais de Otimização

            Grupo 1:
                Caio Nogueira Bindella            - 202110049311
                Davidson Costa de Oliveira        - 202010076211
                Guilherme Cagide Fialho           - 202010077311
                João Matheus Ramos Gama           - 202010076311
                Júlya Matias de Alcantara         - 202010357411
                Maike William Barreto De Oliveira - 201910351911

Funcao Rosenbrock f(x) = 100(xi^2 - xi)^2 + (xii - 1)^2 para x entre [?,?]

Função Rastrigin f(x) = A*n + x^2 - A*cos(2*PI*x) para x E [-5.12,5,12]
                f(x) = 10*2 + x^2 - 10*cos(2*PI*x)
    minimo global x =0 where f(x) = 0

Implemente o algoritmo Simulated Annealing,Usando hillClimbing Subida Íngreme compare:
    - Execute ambos 1000 vezes na função Rastrigin e Rosenbrock
    - Calcule o numero medio de vezes que cada algoritmo encontrou o minimo global
    - inserir um contador de ativações nas funções para saber quantas
       vezes elas foram chamadas

****************************************************************************************/
/*
Algoritmo Simulated Anneling

t <- temperatura alto no começo
s <- soluçõa candidata

best <- s

repeat
    R <- tweak(copia(s))
    if [Qual(R) > Qual(s)] ou aleatorio < [Qual(R) > Qual(s)]/t
        s <- R

    diminui t
    if Qual(s) > Qual(best)
        best <- s
até que t<= 0

retorna best
*/
/*
Algoritmo HillClimbing com subida Ingrime

n = número de perturbações desejadas
s = solução candidata inicial
while (solução ideal || estourou tempo)
{
    r = tweak(copia(s))
    For n = 1 to n{
        w = tweak(copia(s))
        If Qualidade(w) > Qualidade(R) then
            r = w
    If Qualidade(r) > Qualidade(s) then
        s = r
    }
}

*/
/*
algoritmo tweak

v <- <v1, v2, vl >
p <- probabilidade de haver ruido num elemento do vetor (p=1)
r <- meio alcance do ruido
min <- valor minimo vl
max <- valor maximo v0

    for i = 1 a l
        if p >= random (uniforme entre 0 a 1)
        repeat
            n <- numero aleatorio entre -r a r
        até que min < vi + n < max
        vi = vi + n

return v
*/

// #include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.141592

using namespace std;

// Rosenbrock ( função e derivada )
float Rosenbrock()
{
    float x = (rand() % 13) - 6; // Pega numero aleatorio entre -6 e 6

    return 10 + pow(x, 2) - 10 * cos(2 * PI * x);
}

int Derivada_Rosenbrock(float x)
{
    float x = (rand() % 13) - 6; // Pega numero aleatorio entre -6 e 6

    float func = 2 * x + 20 * PI * sin(2 * PI * x); // Derivada da função pedida no enunciado;

    if ((func == 0) || (func < 1 && func > -1))
        return 0;
    else if (func > 0)
        return 1;
    else
        return -1;
}

// Rosenbrock ( função e derivada )
float Rastrigin()
{
    float x = ((rand() % 1025) - 512) / 100; // Pega numero aleatorio entre -5.12 e 5.12

    return x;
    // printf("%f", x);
    // return 10 * 2 + pow(x, 2) - 10 * cos(2 * PI * x);
}

int Derivada_Rastrigin()
{
    float x = ((rand() % 1025) - 512) / 100; // Pega numero aleatorio entre -5.12 e 5.12

    float func = 2 * x + 20 * PI * sin(2 * PI * x); // Derivada da função pedida no enunciado;

    if ((func == 0) || (func < 1 && func > -1))
        return 0;
    else if (func > 0)
        return 1;
    else
        return -1;
}

// Tweak
// float Tweak()
// {
//     v <- <v1, v2, vl >
//     p <- probabilidade de haver ruido num elemento do vetor (p=1)
//     r <- meio alcance do ruido
//     min <- valor minimo vl
//     max <- valor maximo v0

//         for i = 1 a l
//             if p >= random (uniforme entre 0 a 1)
//             repeat
//                 n <- numero aleatorio entre -r a r
//             até que min < vi + n < max
//             vi = vi + n

//     return v
// }

// SA
// float SA()
// {
//     int T = 1000;
//     float S, R, best;

//     S = zero_func_Rastrigin();
//     best = S;

//     do
//     {
//         R = tweak(S);
//         if((Qualidade(R) > Qualidade(S)) ||  aleatorio() < e^([Qual(R) - Qual(s)]/t)
// 			S = R;

// 		T--;

// 		if Qual(s) > Qual(best)
// 		best <- s
//     } while (T >= 0);

//     return best;
// }

// HillClimbing com subida íngreme
// float HC_subida()
// {
//     int i, T = 1000;
//     float R, W;
//     int n = 10;                  // número de perturbações desejadas
//     float S = (rand() % 11) - 5; // solução candidata inicial

//     while (S || T >= 0)
//     {
//         R = tweak(S);
//         for (i = 1; i <= n; i++)
//         {
//             W = tweak(S);
//             if (Qualidade(W) > Qualidade(R))
//                 R = W;
//         }
//         if (Qualidade(E) > Qualidade(s))
//             S = R;
//         T--;
//     }
// }

int main()
{
    srand(time(NULL));

    // Coloca o timenull
    float x = ((rand() % 1025) - 512) / 100; // Pega numero aleatorio entre -5.12 e 5.12

    // Rastrigin
    // Simulated annealing: rodar 1000 vezes    (Armazenar o menor valor (mais próximo de zero na derivada)
    // HC acentuado: rodar 1000 vezes           (Armazenar o menor valor (mais próximo de zero na derivada)
    printf("%f\n", Rastrigin());

    // Rosenbrock
    // Simulated annealing: rodar 1000 vezes    (Armazenar o menor valor (mais próximo de zero na derivada)
    // HC acentuado: rodar 1000 vezes           (Armazenar o menor valor (mais próximo de zero na derivada)

    // Calcule o numero medio de vezes que cada algoritmo encontrou o minimo global
    // inserir um contador de ativações nas funções para saber quantas vezes elas foram chamadas

    // Rosenbrock
}
