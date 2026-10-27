// RTPG_494: vars=3 stmts=6
void test_func(void) {
    int dat89 = 10;
    int hi70 = 33154;
    int c9 = -28;
    int i;
    for (i = 0; i < 82; i++) {
        hi70 = c9;
        hi70 = dat89 - hi70;
        dat89 = dat89 + dat89;
        hi70 = c9;
        c9 = hi70 - 41;
        hi70 = dat89 + 48961;
    }
}
int main() { test_func(); return 0; }

