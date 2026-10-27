// RTPG_9216: vars=3 stmts=4
int idx_arr[16];
void test_func(void) {
    int dat87 = 57;
    int prev96 = 81;
    int a64 = 92;
    int *ptr = &prev96;
    int i;
    for (i = 0; i < 51; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        dat87 = prev96 + a64;
        dat87 = dat87 + 2;
        a64 = a64 + 2;
        dat87 = prev96 + dat87;
        }
    }
}
int main() { test_func(); return 0; }

