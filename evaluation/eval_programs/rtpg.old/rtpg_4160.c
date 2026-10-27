// RTPG_4160: vars=4 stmts=2
void test_func(void) {
    int cur51 = 20;
    int hi10 = 13277;
    int b69 = 8;
    int a68 = -10;
    int h0 = 3;
    int sv0 = 0;
    int h1 = -25;
    int sv1 = 0;
    int i;
    for (i = 0; i < 33; i++) {
        cur51 = b69 + cur51;
        b69 = b69 + cur51;
    }
}
int main() { test_func(); return 0; }

