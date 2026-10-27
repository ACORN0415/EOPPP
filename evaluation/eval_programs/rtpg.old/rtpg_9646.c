// RTPG_9646: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    float a72 = 82.40;
    int val4 = 7;
    int c17 = 93;
    int acc77 = 5;
    int prev47 = 4;
    int cnt25 = 75;
    int i;
    for (i = 0; i < 64; i++) {
        prev47 = xn[i];
        prev47 = cnt25 % acc77;
        c17 = acc77 + val4;
        a72 = acc77 & prev47;
        val4 = a72 & cnt25;
        cnt25 = cnt25 - 1;
        if (c17 != -23) {
        c17 = acc77;
        }
        yo[i] = cnt25;
    }
}
int main() { test_func(); return 0; }

