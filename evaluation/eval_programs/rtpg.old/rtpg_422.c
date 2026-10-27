// RTPG_422: vars=7 stmts=10
int xn[32];
int yo[32];
void test_func(void) {
    int cnt47 = 64;
    int val4 = 55;
    int z86 = -48;
    int lo0 = 26;
    int dat14 = 2;
    int val85 = 42626;
    int cur86 = -37;
    int *ptr = &val85;
    int i;
    for (i = 0; i < 32; i++) {
        val4 = xn[i];
        dat14 = lo0;
        z86 = z86 - 4;
        val85 = val85;
        cnt47 = z86 + 3;
        lo0 = lo0 - 5;
        cur86 = dat14 + 22;
        val4 = val4 + z86;
        dat14 = cnt47 + 55288;
        cur86 = cur86;
        dat14 = cur86 - dat14;
        *ptr = *ptr + 2;
        yo[i] = val4;
    }
}
int main() { test_func(); return 0; }

