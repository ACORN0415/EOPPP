// RTPG_284: vars=5 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int dat81 = 58504;
    int sum55 = 88;
    int acc64 = 4;
    int res15 = 45427;
    int cnt56 = 52860;
    int i;
    for (i = 0; i < 32; i++) {
        cnt56 = xn[i];
        sum55 = cnt56 ^ dat81;
        res15 = cnt56 + sum55;
        sum55 = dat81 / cnt56;
        res15 = cnt56 - dat81;
        cnt56 = dat81 & acc64;
        yo[i] = sum55;
    }
}
int main() { test_func(); return 0; }

