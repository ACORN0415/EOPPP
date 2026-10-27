// RTPG_283: vars=5 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int acc64 = 58504;
    int res15 = 88;
    int cnt56 = 4;
    int dat81 = 45427;
    int sum55 = 52860;
    int i;
    for (i = 0; i < 32; i++) {
        sum55 = xn[i];
        res15 = sum55 ^ acc64;
        dat81 = sum55 + res15;
        res15 = acc64 / dat81;
        dat81 = sum55 - acc64;
        sum55 = acc64 & res15;
        yo[i] = res15;
    }
}
int main() { test_func(); return 0; }

