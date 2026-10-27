// RTPG_6065: vars=3 stmts=4
void test_func(void) {
    int cur42 = -10;
    int dat45 = 47414;
    int sum32 = 48;
    int i;
    for (i = 0; i < 17; i++) {
        cur42 = cur42 - 2;
        sum32 = cur42 + dat45;
        cur42 = cur42 - 4;
        cur42 = cur42 - -10;
    }
}
int main() { test_func(); return 0; }

