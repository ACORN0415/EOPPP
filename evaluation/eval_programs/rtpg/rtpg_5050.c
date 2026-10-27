// RTPG_5050: vars=4 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int x16 = 10;
    int c60 = 21;
    int z65 = 51463;
    int a72 = 34;
    int *ptr = &z65;
    int h0 = 541;
    int sv0 = 0;
    int h1 = 35;
    int sv1 = 0;
    int i;
    for (i = 0; i < 10; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        z65 = z65 - 1;
        x16 = z65;
        z65 = x16 - z65;
        z65 = a72;
        x16 = z65;
        z65 = a72 - -29;
        }
    }
}
int main() { test_func(); return 0; }

