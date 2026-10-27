// RTPG_9492: vars=7 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int dat18 = 16116;
    int cnt86 = 3;
    int val89 = 46464;
    int sum63 = 18;
    int a54 = -46;
    int cnt63 = 21964;
    int val28 = 5;
    int i;
    for (i = 0; i < 16; i++) {
        sum63 = xn[i];
        val28 = cnt63 + val89;
        dat18 = cnt63 + dat18;
        a54 = sum63;
        cnt63 = cnt63 + 5;
        cnt86 = a54 - cnt86;
        sum63 = val28 + val28;
        val89 = sum63;
        yo[i] = sum63;
    }
}
int main() { test_func(); return 0; }

