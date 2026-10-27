// RTPG_6694: vars=4 stmts=2
void test_func(void) {
    int y99 = 3663;
    int v4 = 34;
    int lo26 = 1;
    int lo44 = 40681;
    int *ptr = &v4;
    int i;
    for (i = 0; i < 84; i++) {
        switch (y99) {
            case 0: lo44 = 25; break;
            case 1: y99 = 15; break;
            case 2: lo44 = 44; break;
            default: break;
        }
        y99 = y99 + 1;
    }
}
int main() { test_func(); return 0; }

