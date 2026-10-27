// RTPG_7065: vars=3 stmts=10
void test_func(void) {
    int hi36 = 5;
    float tmp80 = 22.67;
    double out77 = 48.95;
    int i;
    for (i = 0; i < 6; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        tmp80 = out77 - 49;
        hi36 = out77 - tmp80;
        hi36 = out77 + 72;
        out77 = hi36 - tmp80;
        tmp80 = tmp80 + 2;
        hi36 = out77 + tmp80;
        hi36 = hi36;
        tmp80 = tmp80 + out77;
        tmp80 = hi36 + tmp80;
        out77 = out77 + 2;
        }
    }
}
int main() { test_func(); return 0; }

