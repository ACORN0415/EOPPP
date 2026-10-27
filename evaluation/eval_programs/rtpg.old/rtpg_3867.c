// RTPG_3867: vars=6 stmts=3
void test_func(void) {
    int cur6 = 13;
    int lo16 = 3;
    int cur5 = 19790;
    int lo28 = 31;
    int c9 = 48;
    int val80 = 5;
    int i;
    for (i = 0; i < 70; i++) {
        cur5 = cur5 - 5;
        c9 = c9 - 5;
        val80 = cur5;
        if (cur6 > 28) {
        cur6 = lo28;
        }
    }
}
int main() { test_func(); return 0; }

