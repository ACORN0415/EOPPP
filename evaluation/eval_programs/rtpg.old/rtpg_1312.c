// RTPG_1312: vars=5 stmts=4
void test_func(void) {
    int hi14 = 2;
    int val21 = 21191;
    int v5 = 15;
    int dat1 = 27;
    int a61 = 17;
    int *ptr = &dat1;
    int i;
    for (i = 0; i < 94; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        hi14 = a61;
        v5 = dat1 + val21;
        v5 = a61 + val21;
        hi14 = dat1 + v5;
        }
    }
}
int main() { test_func(); return 0; }

