// RTPG_1862: vars=8 stmts=7
void test_func(void) {
    int out8 = 48;
    int cnt8 = -19;
    int acc12 = 7;
    int tmp47 = 10;
    int y71 = -50;
    int cnt48 = 71;
    int cnt26 = 72;
    int acc50 = 76;
    int *ptr = &cnt48;
    int h0 = 51743;
    int sv0 = 0;
    int h1 = -11;
    int sv1 = 0;
    int h2 = 94;
    int sv2 = 0;
    int h3 = 64;
    int sv3 = 0;
    int i;
    for (i = 0; i < 62; i++) {
        cnt8 = acc50 + out8;
        cnt26 = tmp47 - acc12;
        acc50 = cnt26 + tmp47;
        tmp47 = cnt26 * 46;
        cnt48 = out8 + 74;
        acc50 = acc12;
        cnt48 = cnt48 + cnt8;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

