// RTPG_9569: vars=3 stmts=7
void test_func(void) {
    int z77 = 10;
    int v20 = 2;
    int dat27 = 35442;
    int i;
    for (i = 0; i < 32; i++) {
        dat27 = dat27 + 32;
        dat27 = z77;
        v20 = z77;
        dat27 = dat27 + 1;
        z77 = z77 + 2;
        z77 = z77 + v20;
        z77 = dat27;
        if (dat27 < 12) {
        dat27 = z77 - -42;
        }
    }
}
int main() { test_func(); return 0; }

