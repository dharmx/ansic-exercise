#include <stdio.h>

int htoi(char[]);

void squeeze(char[], char[]);
void squeeze_one(char[], char);
int in(char, char[]);

int any(char[], char[]);

unsigned getbits(unsigned, unsigned, unsigned);
unsigned setbits(unsigned, unsigned, unsigned, unsigned);

unsigned invert(unsigned, unsigned, unsigned);

unsigned bitcount(unsigned);
unsigned fast_bitcount(unsigned X);

void lower(char[]);

int bin_search(int[], int, int, int);
int bin_search_it(int[], int, int);
int bin_search_improved(int[], int, int);

void escape(char[], char[]);
void unescape(char[], char[]);

int atoi_custom(char[]);

void shellsort(int[], int);

void srev(char[]);
void srev_var(char[]);
void srev_var_short(char[]);

void expand(char[], char[]);

void itoa_ex(int, char[]);
void itoa(long, char[]);
void itoa_field(signed, char[], int);

void itob(signed, char[], short);

int trim(char[]);

void any_zero(int[], int);

int getline(char[], int);
int strindex(char[], char[]);

// vim:filetype=c
