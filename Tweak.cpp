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