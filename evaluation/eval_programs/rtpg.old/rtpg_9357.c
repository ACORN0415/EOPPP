// RTPG_9357: vars=9 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int cnt67 = 4;
    int hi6 = 5;
    int lo51 = 46186;
    int cur44 = 12930;
    int a89 = 80;
    int hi66 = 9;
    int hi81 = 16;
    int z72 = 45;
    int out72 = 33;
    int *ptr = &lo51;
    int i;
    for (i = 0; i < 64; i++) {
        a89 = xn[i];
        hi81 = a89 + 10;
        hi6 = a89 - cnt67;
        z72 = cur44 - z72;
        a89 = z72;
        *ptr = *ptr + 2;
        yo[i] = hi6;
    }
}
int main() { test_func(); return 0; }

