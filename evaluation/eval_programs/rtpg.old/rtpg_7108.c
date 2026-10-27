// RTPG_7108: vars=5 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int cur7 = 5;
    int prev24 = 30;
    int lo79 = 47;
    int dat98 = -2;
    int val14 = 3;
    int i;
    for (i = 0; i < 32; i++) {
        cur7 = xn[i];
        cur7 = dat98 + prev24;
        dat98 = dat98 + 2;
        val14 = val14 - 58077;
        dat98 = cur7;
        prev24 = prev24 + 4;
        yo[i] = dat98;
    }
}
int main() { test_func(); return 0; }

