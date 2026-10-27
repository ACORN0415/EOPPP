// RTPG_3288: vars=7 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int tmp15 = 24464;
    int val91 = 43;
    int acc40 = 8043;
    int lo7 = 52822;
    int b11 = 53559;
    int x40 = 57886;
    int tmp14 = 41199;
    int h0 = -12;
    int sv0 = 0;
    int h1 = 26;
    int sv1 = 0;
    int h2 = 45002;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x40 = xn[i];
        b11 = tmp15 * 3;
        b11 = x40 + val91;
        acc40 = lo7 + b11;
        tmp14 = tmp15 + 1;
        if (acc40 <= 63) {
        b11 = lo7 - 0;
        }
        yo[i] = acc40;
    }
}
int main() { test_func(); return 0; }

