// RTPG_2147: vars=6 stmts=5
void test_func(void) {
    int acc78 = 5915;
    int val56 = 10;
    int x90 = 9;
    int b51 = 25;
    int y93 = 4;
    int b64 = 7;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 20; i++) {
        b64 = val56 % acc78;
        x90 = y93 + x90;
        val56 = acc78 & b51;
        val56 = val56;
        y93 = acc78;
    }
}
int main() { test_func(); return 0; }

