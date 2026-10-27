// RTPG_7523: vars=7 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int a2 = 14;
    int dat37 = -23;
    int res39 = 9;
    int z82 = 60642;
    int hi53 = 3;
    float acc58 = 93.54;
    int a97 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        hi53 = xn[i];
        z82 = z82 + 4;
        acc58 = a2;
        a2 = hi53 - z82;
        dat37 = dat37 + 1;
        hi53 = hi53 + 5;
        acc58 = res39 + 18;
        res39 = hi53 + res39;
        hi53 = a97;
        if (a97 > 73) {
        dat37 = a97 - dat37;
        }
        yo[i] = a97;
    }
}
int main() { test_func(); return 0; }

