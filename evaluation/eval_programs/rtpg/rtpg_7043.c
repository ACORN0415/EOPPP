// RTPG_7043: vars=4 stmts=4
void test_func(void) {
    int a22 = 2;
    int z98 = 7;
    int acc12 = -10;
    int val74 = 7992;
    int i;
    for (i = 0; i < 81; i++) {
        a22 = a22 - 4;
        val74 = acc12 - 5;
        acc12 = acc12 - 1;
        acc12 = val74 - acc12;
        if (z98 <= 4) {
        val74 = a22 + val74;
        }
    }
}
int main() { test_func(); return 0; }

