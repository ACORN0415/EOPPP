// RTPG_3452: vars=5 stmts=8
void test_func(void) {
    int c11 = -11;
    int b9 = 18161;
    int b95 = 19;
    int b58 = 8;
    int dat25 = 24;
    int i;
    for (i = 0; i < 15; i++) {
        dat25 = c11 + b9;
        dat25 = dat25 - 4;
        b58 = b58 - 5;
        c11 = b9 - c11;
        c11 = c11;
        c11 = c11;
        c11 = c11 + b58;
        b9 = b58 - b58;
    }
}
int main() { test_func(); return 0; }

