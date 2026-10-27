// RTPG_1214: vars=10 stmts=9
int xn[32];
int yo[32];
enum State { ON, RED, GREEN };
void test_func(void) {
    int a16 = 97;
    int hi11 = -43;
    int y53 = 17;
    int val98 = 26;
    int val15 = 5;
    int cnt71 = 45;
    int lo62 = 5;
    int x50 = 62888;
    int sum60 = 52807;
    int x5 = 3;
    enum State st = ON;
    int i;
    for (i = 0; i < 32; i++) {
        y53 = xn[i];
        lo62 = val98 + cnt71;
        val15 = x5;
        sum60 = lo62 ^ x5;
        lo62 = sum60 + cnt71;
        y53 = hi11 / x5;
        x5 = x5 % sum60;
        hi11 = hi11 - y53;
        x5 = x5 + cnt71;
        val98 = val98 ^ a16;
        yo[i] = a16;
    }
}
int main() { test_func(); return 0; }

