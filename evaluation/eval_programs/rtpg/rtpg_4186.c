// RTPG_4186: vars=8 stmts=8
void test_func(void) {
    int hi40 = 20;
    int dat48 = 44;
    float val91 = 77.78;
    int c88 = -3;
    int b49 = -30;
    int hi69 = 25;
    int out15 = 0;
    int out1 = 43;
    int i;
    for (i = 0; i < 51; i++) {
        dat48 = hi40;
        val91 = out15;
        out15 = b49 - 15;
        dat48 = b49 - hi69;
        c88 = b49 - out1;
        dat48 = hi69 - b49;
        c88 = c88 - 1;
        hi69 = hi69 + 3;
    }
}
int main() { test_func(); return 0; }

