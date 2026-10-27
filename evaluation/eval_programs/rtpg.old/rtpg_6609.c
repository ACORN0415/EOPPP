// RTPG_6609: vars=4 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int c68 = 20548;
    int hi26 = -49;
    int out45 = 13;
    int a57 = 19;
    int i;
    for (i = 0; i < 32; i++) {
        hi26 = xn[i];
        hi26 = hi26 - out45;
        hi26 = hi26 - out45;
        c68 = c68 % hi26;
        yo[i] = a57;
    }
}
int main() { test_func(); return 0; }

