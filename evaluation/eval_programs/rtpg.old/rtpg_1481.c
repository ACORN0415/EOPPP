// RTPG_1481: vars=6 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int x50 = 33;
    int a57 = 71;
    int hi47 = 85;
    int out22 = 92;
    int cur87 = 56345;
    int hi62 = 18;
    int i;
    for (i = 0; i < 16; i++) {
        cur87 = xn[i];
        a57 = hi47 + 4;
        hi47 = x50 - cur87;
        out22 = a57;
        hi62 = cur87 - out22;
        hi62 = a57 - a57;
        if (a57 < 62) {
        hi47 = hi47 - 3;
        }
        yo[i] = hi62;
    }
}
int main() { test_func(); return 0; }

