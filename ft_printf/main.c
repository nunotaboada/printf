#include "ft_printf.h"

int main(void)
{
    int len;

    // Teste %c: caractere único
    len = ft_printf("Caractere: %c\n", 'A');
    ft_printf("Tamanho retornado: %d\n\n", len);

    // Teste %s: string normal e NULL
    len = ft_printf("String: %s\n", "Hello, 42!");
    ft_printf("Tamanho retornado: %d\n", len);
    len = ft_printf("String NULL: %s\n", NULL);
    ft_printf("Tamanho retornado: %d\n\n", len);

    // Teste %p: ponteiro válido e NULL
    len = ft_printf("Ponteiro: %p\n", (void *)main);
    ft_printf("Tamanho retornado: %d\n", len);
    len = ft_printf("Ponteiro NULL: %p\n", NULL);
    ft_printf("Tamanho retornado: %d\n\n", len);

    // Teste %d: número decimal positivo, negativo e zero
    len = ft_printf("Decimal positivo: %d\n", 42);
    ft_printf("Tamanho retornado: %d\n", len);
    len = ft_printf("Decimal negativo: %d\n", -42);
    ft_printf("Tamanho retornado: %d\n", len);
    len = ft_printf("Decimal zero: %d\n", 0);
    ft_printf("Tamanho retornado: %d\n\n", len);

    // Teste %i: inteiro positivo, negativo e zero
    len = ft_printf("Inteiro positivo: %i\n", 42);
    ft_printf("Tamanho retornado: %d\n", len);
    len = ft_printf("Inteiro negativo: %i\n", -42);
    ft_printf("Tamanho retornado: %d\n", len);
    len = ft_printf("Inteiro zero: %i\n", 0);
    ft_printf("Tamanho retornado: %d\n\n", len);

    // Teste %u: inteiro sem sinal
    len = ft_printf("Unsigned: %u\n", 42);
    ft_printf("Tamanho retornado: %d\n", len);
    len = ft_printf("Unsigned grande: %u\n", 4294967295U);
    ft_printf("Tamanho retornado: %d\n\n", len);

    // Teste %x: hexadecimal minúsculo
    len = ft_printf("Hex minúsculo: %x\n", 255);
    ft_printf("Tamanho retornado: %d\n", len);
    len = ft_printf("Hex minúsculo zero: %x\n", 0);
    ft_printf("Tamanho retornado: %d\n\n", len);

    // Teste %X: hexadecimal maiúsculo
    len = ft_printf("Hex maiúsculo: %X\n", 255);
    ft_printf("Tamanho retornado: %d\n", len);
    len = ft_printf("Hex maiúsculo zero: %X\n", 0);
    ft_printf("Tamanho retornado: %d\n\n", len);

    // Teste %%: sinal de porcentagem
    len = ft_printf("Porcentagem: %%\n");
    ft_printf("Tamanho retornado: %d\n\n", len);

    // Teste combinado
    len = ft_printf("Combinado: %s, %d, %x, %p\n", "teste", 123, 456, (void *)main);
    ft_printf("Tamanho retornado: %d\n", len);

    return (0);
}