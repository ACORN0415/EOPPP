// RTPG_7519: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int val32 = 48319;
    int cnt70 = 43;
    int b37 = 39;
    int acc36 = -15;
    int i;
    for (i = 0; i < 64; i++) {
        val32 = xn[i];
        cnt70 = b37 - acc36;
        acc36 = b37 - 19;
        b37 = val32 + val32;
        b37 = b37 - 3;
        val32 = val32 + b37;
        if (val32 > -30) {
        acc36 = cnt70 + val32;
        }
        yo[i] = acc36;
    }
}
int main() { test_func(); return 0; }

