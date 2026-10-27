// RTPG_7918: vars=3 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int a96 = 7;
    int acc33 = 76;
    int cnt11 = 32826;
    int i;
    for (i = 0; i < 32; i++) {
        a96 = xn[i];
        cnt11 = a96 % acc33;
        acc33 = cnt11;
        acc33 = a96 + cnt11;
        acc33 = a96;
        cnt11 = cnt11 | cnt11;
        cnt11 = cnt11 % a96;
        acc33 = acc33 ^ acc33;
        cnt11 = a96 / acc33;
        yo[i] = a96;
    }
}
int main() { test_func(); return 0; }

