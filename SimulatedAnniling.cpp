float SA()
{
    int T = 1000;
    float S, R, best;

    S = zero_func_Rastrigin();
    best = S;

    do
    {
        R = tweak(S);
        if((Qualidade(R) > Qualidade(S)) ||  aleatorio() < e^([Qual(R) - Qual(s)]/t)
			S = R;

		T--;
		
		if Qual(s) > Qual(best)
		best <- s
    } while (T >= 0);

    return best;
}