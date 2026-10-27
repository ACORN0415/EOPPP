// RTPG_5942: vars=3 stmts=4
void test_func(void) {
    int dat7 = 5;
    int res82 = 1;
    int a99 = 38;
    int i;
    for (i = 0; i < 63; i++) {
        switch (a99) {
            case 0: a99 = -34; break;
            case 1: a99 = 10; break;
            case 2: dat7 = 55331; break;
            case 3: res82 = 62; break;
            default: break;
        }
        a99 = a99 + 1;
    }
}
int main() { test_func(); return 0; }

