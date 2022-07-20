float RandomSearch()
{
    Best <- Solução aleatorio inicial
    Repeat
        S <- Solução candidata aleatoria
        If Qualidade(s) > Qualidade(Best)
            Best <- S
    Até estourou o tempo ou best é o ideal

    return best
}