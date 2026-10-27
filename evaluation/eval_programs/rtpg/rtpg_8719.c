// RTPG_8719: vars=4 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int a54 = 48457;
    int cnt20 = 0;
    int dat63 = 84;
    int prev97 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        a54 = xn[i];
        prev97 = prev97 - 36;
        cnt20 = prev97 - a54;
        prev97 = prev97 - cnt20;
        dat63 = prev97;
        a54 = prev97 + 30955;
        dat63 = cnt20 + 53;
        a54 = cnt20 + 20;
        yo[i] = prev97;
    }
}
int main() { test_func(); return 0; }

