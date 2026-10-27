// RTPG_4304: vars=4 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int a24 = 49070;
    int y95 = 0;
    int x72 = -25;
    int y93 = 9;
    int i;
    for (i = 0; i < 27; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        x72 = x72 + 3;
        y93 = y95 + 48;
        y95 = y93;
        }
    }
}
int main() { test_func(); return 0; }

