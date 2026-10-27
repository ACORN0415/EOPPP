// RTPG_9147: vars=3 stmts=8
void test_func(void) {
    int dat1 = 9;
    int out49 = 1;
    int out0 = -36;
    int i;
    for (i = 0; i < 46; i++) {
        dat1 = out49;
        out49 = out0;
        dat1 = out49 + dat1;
        out49 = out49 - 2;
        out0 = out0 - out49;
        out49 = dat1;
        dat1 = dat1;
        dat1 = out0 + out49;
        if (out49 != -2) {
        out0 = out0 - 1;
        }
    }
}
int main() { test_func(); return 0; }

