// RTPG_3354: vars=7 stmts=10
int xn[32];
int yo[32];
void test_func(void) {
    int c66 = 47;
    int acc64 = 9;
    int sum51 = 86;
    int sum6 = 25399;
    int val34 = 19;
    int prev21 = -29;
    int cur64 = 52552;
    int i;
    for (i = 0; i < 32; i++) {
        sum6 = xn[i];
        val34 = sum51 - acc64;
        cur64 = sum51;
        sum6 = val34 & sum51;
        sum51 = prev21 - c66;
        acc64 = prev21 ^ acc64;
        sum6 = sum51 ^ val34;
        prev21 = val34 - acc64;
        cur64 = c66 - sum6;
        c66 = prev21 ^ sum6;
        acc64 = acc64 + acc64;
        yo[i] = acc64;
    }
}
int main() { test_func(); return 0; }

