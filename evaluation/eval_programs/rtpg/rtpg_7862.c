// RTPG_7862: vars=16 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int z56 = 36189;
    int res66 = 32;
    int a61 = 7;
    int z69 = 31;
    int hi82 = 52521;
    int prev24 = 0;
    int v18 = -28;
    int acc52 = 9;
    int cnt43 = 44;
    int b73 = 44;
    int a5 = 0;
    int lo58 = 36;
    int acc45 = -19;
    int val90 = 6;
    int v38 = 59043;
    int tmp40 = 90;
    int i;
    for (i = 0; i < 64; i++) {
        v18 = xn[i];
        acc45 = v18;
        z69 = prev24 - z56;
        cnt43 = acc45 - 3;
        tmp40 = tmp40 + 1;
        z69 = z69 - 5;
        hi82 = hi82 + tmp40;
        yo[i] = prev24;
    }
}
int main() { test_func(); return 0; }

