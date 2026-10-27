// RTPG_4265: vars=3 stmts=12
void test_func(void) {
    int val47 = 4;
    int cnt92 = 19;
    int res69 = 6;
    int h0 = 59;
    int sv0 = 0;
    int h1 = 35;
    int sv1 = 0;
    int i;
    for (i = 0; i < 23; i++) {
        val47 = res69 | cnt92;
        res69 = cnt92 % res69;
        cnt92 = res69 + cnt92;
        val47 = val47 + 4;
        res69 = cnt92 | val47;
        res69 = val47;
        val47 = res69 - val47;
        val47 = val47;
        res69 = val47 - 69;
        val47 = val47 * 72;
        cnt92 = val47 + 100;
        res69 = cnt92;
        if (cnt92 == -4) {
        res69 = cnt92 + res69;
        }
    }
}
int main() { test_func(); return 0; }

