// RTPG_4499: vars=8 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int sum87 = 5;
    int lo54 = 10;
    int acc5 = -29;
    int v41 = 4;
    int cur53 = 32632;
    int prev45 = -29;
    int acc18 = -28;
    int dat79 = 27694;
    int h0 = -46;
    int sv0 = 0;
    int h1 = 60394;
    int sv1 = 0;
    int h2 = 33163;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur53 = xn[i];
        cur53 = acc18;
        v41 = acc5 * 18;
        acc18 = acc18 - 1;
        prev45 = dat79 + prev45;
        cur53 = cur53 - prev45;
        if (cur53 > -48) goto done;
        yo[i] = prev45;
    }
done:
    acc18 = 0;
}
int main() { test_func(); return 0; }

