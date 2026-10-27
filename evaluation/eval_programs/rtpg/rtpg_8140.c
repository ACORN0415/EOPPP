// RTPG_8140: vars=3 stmts=8
void test_func(void) {
    int dat50 = 16;
    int val68 = 0;
    int a30 = 40;
    int i;
    for (i = 0; i < 23; i++) {
        dat50 = val68 + dat50;
        dat50 = dat50 + a30;
        dat50 = dat50 + 4;
        a30 = val68 + 17425;
        a30 = a30;
        val68 = val68 - 9;
        dat50 = val68 + val68;
        dat50 = val68 - 29;
        if (dat50 <= 67) {
        val68 = a30 + dat50;
        }
    }
}
int main() { test_func(); return 0; }

