// RTPG_6774: vars=4 stmts=2
void test_func(void) {
    int lo44 = 3663;
    int v4 = 34;
    int y99 = 1;
    int lo26 = 40681;
    int *ptr = &v4;
    int i;
    for (i = 0; i < 84; i++) {
        switch (lo44) {
            case 0: lo26 = 25; break;
            case 1: lo44 = 15; break;
            case 2: lo26 = 44; break;
            default: break;
        }
        lo44 = lo44 + 1;
    }
}
int main() { test_func(); return 0; }

