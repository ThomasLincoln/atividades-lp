int main()
{
    int n1, n2, i, MMC, resto;
    printf("Digite dois numeros a serem avaliados: ");
    scanf("%d %d", &n1, &n2);
    for (i = 2; i <= (n1 * n2); i++)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
        aux = n1 * i;
        if ((aux % n2) == 0) {
            mmc = aux;
            i = n2 + 1;
        }
    }
    printf("MMC= %d\n", MMC);
    do
    {
        resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    } while (resto != 0);
    printf("MDC= %d", n1);
    return 0;
}