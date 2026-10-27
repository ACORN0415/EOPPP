// RTPG_1709: vars=7 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int acc64 = 50;
    int cur0 = 4;
    int acc25 = 64;
    double out39 = 85.21;
    int a57 = 10;
    int val83 = -35;
    float cnt95 = 25.57;
    int i;
    for (i = 0; i < 16; i++) {
        cur0 = xn[i];
        a57 = val83;
        acc64 = acc25;
        val83 = val83 - acc64;
        acc25 = cur0 - 25991;
        cur0 = acc64 + acc25;
        out39 = val83 - 10;
        cur0 = acc25 - out39;
        yo[i] = cur0;
    }
}
int main() { test_func(); return 0; }

