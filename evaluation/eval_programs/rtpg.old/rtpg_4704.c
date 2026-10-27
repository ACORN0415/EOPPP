// RTPG_4704: vars=5 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int cur6 = 34;
    int b21 = 33238;
    int cur65 = 48;
    int c25 = 50;
    int lo80 = 11369;
    int h0 = 20;
    int sv0 = 0;
    int h1 = 54349;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        c25 = xn[i];
        lo80 = cur6 ^ c25;
        c25 = cur65 + lo80;
        b21 = c25 % lo80;
        if (c25 == -19) {
        c25 = cur6 - b21;
        }
        yo[i] = cur65;
    }
}
int main() { test_func(); return 0; }

