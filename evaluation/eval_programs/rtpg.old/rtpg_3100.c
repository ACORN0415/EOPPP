// RTPG_3100: vars=3 stmts=2
int idx_arr[32];
void test_func(void) {
    int z81 = 3;
    int v73 = 14101;
    int tmp67 = -27;
    int *ptr = &tmp67;
    int i;
    for (i = 0; i < 6; i++) {
        v73 = xn[idx_arr[i]];
        v73 = z81 - v73;
        z81 = v73 - z81;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

