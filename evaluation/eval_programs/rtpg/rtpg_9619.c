// RTPG_9619: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int a81 = -8;
    int hi92 = 3;
    int cnt82 = 7;
    int acc46 = 35373;
    int z57 = -44;
    int *ptr = &z57;
    int i;
    for (i = 0; i < 64; i++) {
        acc46 = xn[i];
        acc46 = z57 - cnt82;
        a81 = z57 & hi92;
        acc46 = cnt82 - 93;
        cnt82 = a81 / cnt82;
        *ptr = *ptr + 1;
        yo[i] = hi92;
    }
}
int main() { test_func(); return 0; }

