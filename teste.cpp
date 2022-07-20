#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.141592
#define ValorVetor 1000

void Tweak(float tweak[10])
{
    int TamVetor = 10;
    float probRuido = 1, raioRuido 4, tamanho;

    for (int i = 0; i <= TamVetor; i++)
    {

        if (p >= rand() % 1)
            while (min < vi + n || vi + n < max)
            {
                n = (rand() % (raioRuido * 2)) - raioRuido;
            }

        tweak[i] = tweak[i] + n;
    }

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
}

int main()
{
    srand(time(NULL));

    // float x = ((rand() % 1025) - 512) / 100;

    float iteracoesRosenbrockHC[ValorVetor], iteracoesRosenbrockSA[ValorVetor];
    float iteracoesRastriginHC[ValorVetor], iteracoesRastriginSA[ValorVetor];

    int contador = 0;

    while (contador <= 1000)
    {

        float x = ((rand() % 1025) - 512) / 100.0;
        printf("%.2f\n", x);
        ++contador;
    }
}