// RTPG_7267: vars=10 stmts=5
int idx_arr[16];
void test_func(void) {
    int x20 = 6;
    int x33 = 7;
    int b25 = -12;
    int a88 = 46;
    int dat78 = 0;
    int hi72 = 0;
    int cur33 = 33042;
    int cur87 = 2;
    int a23 = 8;
    int lo87 = 53177;
    int *ptr = &a23;
    int i;
    for (i = 0; i < 22; i++) {
        hi72 = xn[idx_arr[i]];
        cur33 = cur33 + 3;
        hi72 = lo87;
        x33 = cur87 + dat78;
        a23 = cur33 - b25;
        cur33 = cur33 + 3;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

