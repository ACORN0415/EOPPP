// RTPG_9030: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int c24 = 34;
    int c47 = 8;
    int v26 = 7;
    int c25 = -16;
    int i;
    for (i = 0; i < 92; i++) {
        switch (c25) {
            case 0: c47 = 57; break;
            case 1: c24 = 39035; break;
            default: break;
        }
        c25 = c25 + 1;
    }
}
int main() { test_func(); return 0; }

