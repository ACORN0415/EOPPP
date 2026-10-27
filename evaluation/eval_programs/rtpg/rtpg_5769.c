// RTPG_5769: vars=6 stmts=7
void test_func(void) {
    int b23 = 75;
    int out25 = 73;
    int prev57 = 4;
    int tmp70 = 99;
    int x87 = 46;
    int cur6 = 7;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 37;
    int sv1 = 0;
    int i;
    for (i = 0; i < 94; i++) {
        prev57 = prev57 - 2;
        out25 = prev57 - out25;
        x87 = tmp70 + 5;
        cur6 = tmp70 - prev57;
        b23 = b23 - out25;
        x87 = prev57 + 46;
        out25 = prev57 * 12709;
    }
}
int main() { test_func(); return 0; }

