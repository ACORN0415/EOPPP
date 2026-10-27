// RTPG_7494: vars=3 stmts=3
void test_func(void) {
    int cnt47 = -19;
    int b36 = 7;
    int out58 = 57960;
    int i;
    for (i = 0; i < 6; i++) {
        cnt47 = b36 + 25;
        out58 = out58 + 2;
        b36 = out58 + b36;
    }
}
int main() { test_func(); return 0; }

