// RTPG_7770: vars=16 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int tmp40 = 36189;
    int z56 = 32;
    int a5 = 7;
    int z69 = 31;
    int val90 = 52521;
    int prev24 = 0;
    int b73 = -28;
    int v18 = 9;
    int hi82 = 44;
    int acc45 = 44;
    int cnt43 = 0;
    int lo58 = 36;
    int res66 = -19;
    int v38 = 6;
    int acc52 = 59043;
    int a61 = 90;
    int i;
    for (i = 0; i < 64; i++) {
        b73 = xn[i];
        res66 = b73;
        z69 = prev24 - tmp40;
        hi82 = res66 - 3;
        a61 = a61 + 1;
        z69 = z69 - 5;
        val90 = val90 + a61;
        yo[i] = prev24;
    }
}
int main() { test_func(); return 0; }

