// RTPG_5547: vars=8 stmts=10
int xn[32];
int yo[32];
void test_func(void) {
    int cur6 = 32;
    int v1 = 35;
    int b76 = 4;
    int res17 = 89;
    int a50 = 5;
    int x66 = 6427;
    int b7 = 6;
    int x35 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        x66 = xn[i];
        v1 = b76;
        v1 = x35 / cur6;
        x66 = res17 / x35;
        b7 = x35 - 4;
        cur6 = b76 ^ cur6;
        x66 = v1;
        cur6 = cur6;
        cur6 = x66 + res17;
        v1 = b7 / x35;
        b7 = b76 % b76;
        yo[i] = b7;
    }
}
int main() { test_func(); return 0; }

