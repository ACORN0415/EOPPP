// RTPG_3687: vars=3 stmts=3
void test_func(void) {
    int cnt30 = 8;
    int x14 = 39448;
    int dat41 = 86;
    int i;
    for (i = 0; i < 48; i++) {
        cnt30 = cnt30 - 2;
        dat41 = x14 + 5;
        dat41 = dat41 + x14;
        if (cnt30 >= 96) {
        dat41 = dat41 + 1;
        }
    }
}
int main() { test_func(); return 0; }

