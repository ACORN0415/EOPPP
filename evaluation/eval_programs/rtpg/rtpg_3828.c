// RTPG_3828: vars=5 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int c63 = 64;
    double res47 = 69.03;
    int tmp28 = 63700;
    double acc25 = 4.80;
    double sum7 = 40.00;
    int h0 = 37;
    int sv0 = 0;
    int h1 = -1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        sum7 = xn[i];
        tmp28 = tmp28 - 5;
        c63 = c63;
        c63 = c63 + sum7;
        c63 = acc25 + res47;
        tmp28 = res47;
        tmp28 = c63 - res47;
        c63 = sum7 + c63;
        acc25 = res47 - 3;
        yo[i] = tmp28;
    }
}
int main() { test_func(); return 0; }

