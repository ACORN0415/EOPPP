// RTPG_7947: vars=6 stmts=5
void test_func(void) {
    int dat32 = 10;
    int cur30 = 61161;
    int lo36 = -39;
    int a92 = 68;
    int sum18 = 38;
    int tmp35 = 54682;
    int i;
    for (i = 0; i < 16; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        lo36 = dat32 + lo36;
        a92 = a92 + lo36;
        sum18 = sum18 - 4;
        tmp35 = lo36 - tmp35;
        dat32 = dat32 - 5;
        }
    }
done:
    tmp35 = 0;
}
int main() { test_func(); return 0; }

