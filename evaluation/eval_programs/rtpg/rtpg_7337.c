// RTPG_7337: vars=10 stmts=5
int idx_arr[16];
void test_func(void) {
    int cur87 = 6;
    int x20 = 7;
    int b25 = -12;
    int hi72 = 46;
    int lo87 = 0;
    int x33 = 0;
    int a23 = 33042;
    int a88 = 2;
    int dat78 = 8;
    int cur33 = 53177;
    int *ptr = &dat78;
    int i;
    for (i = 0; i < 22; i++) {
        x33 = xn[idx_arr[i]];
        a23 = a23 + 3;
        x33 = cur33;
        x20 = a88 + lo87;
        dat78 = a23 - b25;
        a23 = a23 + 3;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

