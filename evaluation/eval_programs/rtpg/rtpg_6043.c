// RTPG_6043: vars=3 stmts=4
void test_func(void) {
    int res82 = 5;
    int a99 = 1;
    int dat7 = 38;
    int i;
    for (i = 0; i < 63; i++) {
        switch (dat7) {
            case 0: dat7 = -34; break;
            case 1: dat7 = 10; break;
            case 2: res82 = 55331; break;
            case 3: a99 = 62; break;
            default: break;
        }
        dat7 = dat7 + 1;
    }
}
int main() { test_func(); return 0; }

