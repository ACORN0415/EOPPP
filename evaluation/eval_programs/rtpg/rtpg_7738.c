// RTPG_7738: vars=4 stmts=3
void test_func(void) {
    int val31 = 25;
    double lo14 = 68.39;
    double cnt12 = 4.41;
    int hi25 = 38;
    int i;
    for (i = 0; i < 33; i++) {
        lo14 = lo14 - 1;
        val31 = hi25 + val31;
        hi25 = hi25 + 1;
        if (cnt12 > 78) {
        cnt12 = cnt12 - hi25;
        }
    }
}
int main() { test_func(); return 0; }

