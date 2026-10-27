// RTPG_4442: vars=8 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int acc5 = 5;
    int cur53 = 10;
    int acc18 = -29;
    int lo54 = 4;
    int sum87 = 32632;
    int prev45 = -29;
    int v41 = -28;
    int dat79 = 27694;
    int h0 = -46;
    int sv0 = 0;
    int h1 = 60394;
    int sv1 = 0;
    int h2 = 33163;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        sum87 = xn[i];
        sum87 = v41;
        lo54 = acc18 * 18;
        v41 = v41 - 1;
        prev45 = dat79 + prev45;
        sum87 = sum87 - prev45;
        if (sum87 > -48) goto done;
        yo[i] = prev45;
    }
done:
    v41 = 0;
}
int main() { test_func(); return 0; }

