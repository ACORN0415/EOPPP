// RTPG_2463: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int cnt97 = 5;
    int dat20 = 0;
    int out62 = 0;
    int prev34 = 55;
    int val67 = 62584;
    int out88 = 1;
    int *ptr = &cnt97;
    int i;
    for (i = 0; i < 64; i++) {
        dat20 = xn[i];
        out88 = out88 - 5;
        out62 = out62 + 2;
        dat20 = prev34 - out88;
        out62 = out62 - 8;
        cnt97 = cnt97 - 7;
        *ptr = *ptr + 1;
        yo[i] = cnt97;
    }
}
int main() { test_func(); return 0; }

