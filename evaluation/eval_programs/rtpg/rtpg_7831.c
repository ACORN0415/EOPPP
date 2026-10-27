// RTPG_7831: vars=6 stmts=4
void test_func(void) {
    int tmp86 = 9715;
    int x24 = 5;
    int prev75 = 71;
    int tmp83 = 45;
    int lo2 = 31029;
    int hi3 = 63973;
    int i;
    for (i = 0; i < 48; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        hi3 = tmp86 - 3;
        x24 = lo2 - hi3;
        lo2 = lo2 + 4;
        tmp86 = tmp86 - 4;
        }
    }
}
int main() { test_func(); return 0; }

