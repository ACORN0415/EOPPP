// RTPG_5359: vars=3 stmts=4
void test_func(void) {
    int hi40 = -45;
    int tmp34 = 13677;
    int dat37 = 74;
    int i;
    for (i = 0; i < 13; i++) {
        hi40 = hi40;
        tmp34 = hi40 + 33;
        hi40 = hi40 + hi40;
        hi40 = hi40 + 85;
    }
}
int main() { test_func(); return 0; }

