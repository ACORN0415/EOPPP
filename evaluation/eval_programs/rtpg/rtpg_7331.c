// RTPG_7331: vars=3 stmts=4
void test_func(void) {
    int a95 = 63;
    int dat57 = 31;
    int acc39 = 19;
    int i;
    for (i = 0; i < 24; i++) {
        acc39 = acc39;
        dat57 = dat57 - 5;
        acc39 = dat57;
        dat57 = a95 - dat57;
    }
}
int main() { test_func(); return 0; }

