// RTPG_3508: vars=4 stmts=8
void test_func(void) {
    int val93 = 55598;
    int tmp18 = 66;
    int c39 = 86;
    int y50 = 3;
    int i;
    for (i = 0; i < 72; i++) {
        y50 = val93;
        c39 = c39 + 7889;
        tmp18 = c39 + tmp18;
        val93 = tmp18;
        tmp18 = tmp18 + tmp18;
        val93 = tmp18 + 9;
        c39 = c39 + 6;
        val93 = tmp18 - y50;
    }
}
int main() { test_func(); return 0; }

