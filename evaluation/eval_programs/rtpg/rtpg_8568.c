// RTPG_8568: vars=7 stmts=10
void test_func(void) {
    int dat48 = 3;
    int cur82 = 1;
    int acc31 = 5;
    int val54 = 14197;
    int cnt95 = 37;
    int dat41 = 3;
    int a90 = -34;
    int i;
    for (i = 0; i < 32; i++) {
        cur82 = cur82 - 1;
        acc31 = a90;
        dat41 = a90;
        val54 = val54 - 4;
        cur82 = cur82 - 3;
        dat48 = dat41;
        cur82 = cnt95 + acc31;
        dat41 = cur82 + dat48;
        dat41 = cnt95 - dat41;
        acc31 = a90 - 4;
        if (cnt95 > 7) {
        acc31 = val54;
        }
    }
}
int main() { test_func(); return 0; }

