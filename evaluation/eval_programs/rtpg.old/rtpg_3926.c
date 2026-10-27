// RTPG_3926: vars=4 stmts=3
void test_func(void) {
    int hi90 = 4849;
    int dat91 = 26;
    int val53 = 65026;
    int dat72 = 60719;
    int *ptr = &hi90;
    int i;
    for (i = 0; i < 100; i++) {
        hi90 = dat91 - dat91;
        dat91 = dat72 - 73;
        dat91 = dat91;
        *ptr = *ptr + 4;
        if (val53 >= 84) {
        dat72 = dat72 - 2;
        }
    }
}
int main() { test_func(); return 0; }

