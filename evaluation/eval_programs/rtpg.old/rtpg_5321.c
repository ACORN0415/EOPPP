// RTPG_5321: vars=3 stmts=2
void test_func(void) {
    int sum64 = 100;
    int b57 = 49969;
    int cur47 = 6;
    int h0 = 3048;
    int sv0 = 0;
    int h1 = 24;
    int sv1 = 0;
    int i;
    for (i = 0; i < 28; i++) {
        sum64 = sum64 + 2;
        sum64 = b57 + sum64;
    }
}
int main() { test_func(); return 0; }

