// RTPG_248: vars=8 stmts=5
void test_func(void) {
    int a16 = -5;
    int cur81 = 42;
    int z73 = 13;
    int b1 = 2;
    int v69 = 5;
    int y81 = 43;
    int a99 = 87;
    int lo20 = 7;
    int *ptr = &y81;
    int i;
    for (i = 0; i < 77; i++) {
        v69 = v69 + a16;
        z73 = v69;
        b1 = a16;
        lo20 = y81;
        a16 = a16 + 2;
        *ptr = *ptr + 2;
        if (a16 == 94) {
        lo20 = z73 - v69;
        }
    }
}
int main() { test_func(); return 0; }

