// RTPG_9452: vars=5 stmts=6
void test_func(void) {
    int a22 = 4;
    int res31 = -10;
    int val19 = -29;
    int c98 = 63;
    int lo57 = 25;
    int i;
    for (i = 0; i < 97; i++) {
        lo57 = a22 / val19;
        c98 = val19 / c98;
        res31 = lo57 / val19;
        a22 = val19 % res31;
        a22 = c98 & a22;
        val19 = c98 % lo57;
        if (c98 > 61) {
        res31 = res31 + 1;
        }
    }
}
int main() { test_func(); return 0; }

