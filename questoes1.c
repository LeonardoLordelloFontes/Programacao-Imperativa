#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

// 1

void maior_da_sequencia () {

	int number;
	int max = number;

	printf("Digite um número da sequência: ");
	assert(scanf("%d", &number) == 1);

	max = number;

	while (number != 0) {

		printf("Digite outro número da sequência (digite 0 para terminar a sequência): ");
		assert (scanf("%d", &number) == 1);

		if (number > max)
			max = number;

	}

	printf("O maior número da sequência é %d\n", max);

}

// 2

void media_da_sequencia () {

	float soma = 0;
	int elementos = 0;
	int number;

	printf("Digite um número da sequência: ");
	assert(scanf("%d", &number) == 1);

	soma += number;
	elementos++;

	while (number != 0) {

		printf("Digite outro número da sequência (digite 0 para terminar a sequência): ");
		assert(scanf("%d", &number) == 1);

		soma += number;
		elementos++;
	}

	printf("A média da sequência é %f\n", soma/(elementos - 1));

}

// 3

void segundo_maior_da_sequencia () {

	int number;
	int max1;
	int max2;

	printf("Digite um número da sequência: ");
	assert(scanf("%d", &number) == 1);

	max1 = number;

	while (number != 0) {

		printf("Digite outro número da sequência (digite 0 para terminar a sequência): ");
		assert(scanf("%d", &number) == 1);

		if (number > max1) {
			max2 = max1;
			max1 = number;

		}

		else if (number > max2)
			max2 = number;
	}

	printf("O segundo maior elemento da sequência é %d", max2);

}

// 4

int bitsUm (unsigned int x) {
	
    int r=0;
    
    while (x != 0) {
        
        if (x % 2 == 1)
            r++;
            
        x /= 2;
        
    }

    return r;
}

// 5

int trailingZ (unsigned int n) {
    
    int sequencia = 0, zeros = 0;
    
    if (n == 0) return 32;
    else {
        
        while (n / 2 != 0) {
            
            if (n % 2 == 1) {
                sequencia = 0;
                zeros = 0;
            }
            
            else {
                sequencia = 1;
                zeros++;
            }
            
            n /= 2;
        
        }
        
        if (sequencia == 1) return zeros;
        else return 0;
        
    }
    
}

// 6

int qDig (int n) {
    int r = 0;
    int i;

	for (i = 1; n >= i; i *= 10) {
		r++;
	}
    
    return r;
}

// 7

char *mystrcat(char s1[], char s2[]) {
    
    int i, j;
    
    for (i = 0; s1[i]; i++);
    
    for (j = 0; s2[j]; j++) {
        s1[i] = s2[j];
        i++;
    }
    
    s1[i] = '\0';
    
    return s1;
}

// 8

char *mystrcpy(char s1[], const char s2[]) {
    
    int i;
    
    for (i = 0; s2[i]; i++)
        s1[i] = s2[i];
        
    s1[i] = '\0';
    
    return s1;
}

// 9

int mystrcmp(char s1[], char s2[]) {
    
	for (int i = 0; s1[i] || s2[i]; i++) {

		if (s1[i] > s2[i]) return 1;
		else if (s1[i] < s2[i]) return -1; 

	}
    return 0;
}

// 10

char *mystrstr (char s1[], char s2[]) {
    
    char *ps1 = s1;
    char *ps2 = s2;
    
    if ((*s1 == '\0' && *s2 == '\0') || (*s1 != '\0' && *s2 == '\0')) return s1;
    
    while (*s1) {
        
        if (*s1 == *s2) {
            
            ps1 = s1;
            
            s1++;
            s2++;
            
            while (*s1 == *s2 && *s1 != '\0') {
                
                s1++;
                s2++;
                
            }
            
            if (*s2 == '\0') {
                
                s1 = ps1;
                return s1;
                
            }
            
            else s2 = ps2;
            
        }
        
        s1++;
        
    }
    
    return NULL;
}

// 11

void strrev (char s[]) {
    
    int i, j;
    char temp;
    
    for (i = 0; s[i]; i++);
    
    for (i -= 1, j = 0; j <= i / 2; j++) {
        
        temp = s[i - j];
        s[i - j] = s[j];
        s[j] = temp;
        
    }

    return;
}

// 12

void strnoV (char t[]){
    
    char * pt = t;
    
    for (; *t; t++) {
    
    if (*t != 'a' && *t != 'e' && *t != 'i' && *t != 'o' && *t != 'u' && *t != 'A' && *t != 'E' && *t != 'I' && *t != 'O' && *t != 'U') {
        
        *pt = *t;
        pt++;
        
        }   
    
    }
    
    *pt = '\0';
    t = pt;
    
}

// 13

void truncW (char t[], int n){
    
    char * pt = t;
    int i = 0;
    
    for (;*t; t++) {
        
        if (*t != ' ' && i < n)  {
            
            *pt = *t;
            pt++;
            i++;
            
        }
        
        else if (*t == ' ') {
            
            *pt = *t;
            pt++;
            i = 0;
            
        }
        
    }
    
    *pt = 0;
    t = pt;  
    
}

// 14

char charMaisfreq (char s[]) {
    
    int max = 0, chars, i, j;
    char atual, maisFreq = 0;
    
    for (i = 0; s[i]; i++) {
        
        atual = s[i];
        
        for (chars = 0, j = 0; s[j]; j++) {
        
            if (atual == s[j]) chars++;
        
        }
        
        if (chars > max) {
            maisFreq = atual;
            max = chars;
            
        }
        
    }
    
    return maisFreq;
    
}

// 15

int iguaisConsecutivos (char s[]) {
    
    int chars = 0, max = 0;
    char atual = *s;
    
    
    for (; *s; s++) {
        
        if (atual == *s) {
            
            chars++;
            
        }
        
        else {
            
            chars = 1;
            atual = *s;
            
        }
        
        if (chars > max) max = chars;
        
    }
    
    return max;

}

int main () {

}

