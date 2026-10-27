// RTPG_654: vars=4 stmts=6
void test_func(void) {
    int c29 = 23071;
    int z29 = 3;
    int cur47 = 2;
    int tmp42 = 8;
    int i;
    for (i = 0; i < 79; i++) {
        switch (c29) {
            case 0: tmp42 = 10; break;
            case 1: c29 = 4; break;
            default: break;
        }
        c29 = c29 + 1;
    }
}
int main() { test_func(); return 0; }

