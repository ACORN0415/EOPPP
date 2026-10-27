// RTPG_5964: vars=3 stmts=4
void test_func(void) {
    int dat45 = -10;
    int sum32 = 47414;
    int cur42 = 48;
    int i;
    for (i = 0; i < 17; i++) {
        dat45 = dat45 - 2;
        cur42 = dat45 + sum32;
        dat45 = dat45 - 4;
        dat45 = dat45 - -10;
    }
}
int main() { test_func(); return 0; }

