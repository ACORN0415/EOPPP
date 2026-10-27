// RTPG_8731: vars=14 stmts=12
void test_func(void) {
    int lo10 = -42;
    int b23 = 16;
    int sum43 = 7;
    int out69 = 6;
    float acc9 = 13.95;
    int acc61 = 3;
    int cur93 = 20623;
    double res11 = 47.18;
    int z95 = 43;
    double hi80 = 83.23;
    int acc21 = 0;
    int v30 = 6;
    int acc8 = 27;
    int z72 = 10;
    int *ptr = &hi80;
    int i;
    for (i = 0; i < 23; i++) {
        lo10 = res11;
        sum43 = cur93 + 4;
        acc8 = acc8 + 3;
        z95 = acc8 + -5;
        b23 = res11 + z72;
        z72 = z72 - 4;
        cur93 = cur93 - 5;
        acc9 = acc61 + acc21;
        acc21 = acc21 - 4;
        cur93 = acc8;
        out69 = out69 - 1;
        b23 = acc21 - 80;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

