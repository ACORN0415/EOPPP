// RTPG_3655: vars=6 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int v83 = 31;
    int dat52 = 1;
    int acc88 = 73;
    int v27 = 58533;
    int res47 = 31;
    int val36 = 68;
    int i;
    for (i = 0; i < 32; i++) {
        v27 = xn[i];
        val36 = res47 - val36;
        acc88 = val36 - acc88;
        v83 = val36 + v27;
        val36 = val36 / acc88;
        val36 = v27 | res47;
        yo[i] = val36;
    }
}
int main() { test_func(); return 0; }

