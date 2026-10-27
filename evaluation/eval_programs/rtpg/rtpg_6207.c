// RTPG_6207: vars=3 stmts=2
void test_func(void) {
    int z64 = 3;
    int cnt0 = 92;
    int acc37 = 41753;
    int h0 = 17;
    int sv0 = 0;
    int h1 = 32;
    int sv1 = 0;
    int i;
    for (i = 0; i < 57; i++) {
        cnt0 = acc37;
        acc37 = acc37 * 16;
    }
}
int main() { test_func(); return 0; }

