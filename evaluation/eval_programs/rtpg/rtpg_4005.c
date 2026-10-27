// RTPG_4005: vars=3 stmts=8
void test_func(void) {
    int c10 = 43703;
    int x80 = -22;
    int b18 = -36;
    int h0 = 49313;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 68; i++) {
        b18 = x80 % c10;
        c10 = x80 * 44;
        c10 = c10 + 5;
        x80 = x80 | b18;
        c10 = b18 ^ x80;
        c10 = c10 & b18;
        b18 = x80;
        x80 = x80 % b18;
        if (c10 >= 24) {
        b18 = x80 + c10;
        }
    }
}
int main() { test_func(); return 0; }

