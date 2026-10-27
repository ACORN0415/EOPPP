// RTPG_5163: vars=3 stmts=5
void test_func(void) {
    int c90 = 1;
    int x18 = 25475;
    int c83 = 0;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 15;
    int sv1 = 0;
    int i;
    for (i = 0; i < 72; i++) {
        x18 = x18 * -38;
        x18 = c83 + c90;
        x18 = c83 * 7;
        c90 = c83 * 36982;
        c83 = c83 + 2;
    }
}
int main() { test_func(); return 0; }

