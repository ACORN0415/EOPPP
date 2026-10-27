// RTPG_2309: vars=3 stmts=4
void test_func(void) {
    int lo67 = -8;
    int a99 = -29;
    int a84 = 0;
    int i;
    for (i = 0; i < 66; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        a99 = a84;
        a84 = lo67;
        a84 = a84 - a84;
        a99 = lo67 + a99;
        }
    }
}
int main() { test_func(); return 0; }

