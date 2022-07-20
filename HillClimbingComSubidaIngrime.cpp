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