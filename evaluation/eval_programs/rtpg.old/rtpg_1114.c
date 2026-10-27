// RTPG_1114: vars=4 stmts=5
void test_func(void) {
    int res25 = 5;
    int val62 = 8;
    int prev45 = 27878;
    int y0 = 24;
    int *ptr = &prev45;
    int i;
    for (i = 0; i < 75; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        prev45 = prev45 + 2;
        res25 = val62;
        prev45 = y0 + res25;
        prev45 = val62;
        y0 = res25 + val62;
        }
    }
}
int main() { test_func(); return 0; }

