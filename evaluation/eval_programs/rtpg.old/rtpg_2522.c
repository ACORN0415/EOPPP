// RTPG_2522: vars=6 stmts=3
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int v1 = 27;
    int hi57 = 48;
    int cur20 = 53;
    int b69 = 4;
    int z84 = 7;
    int res47 = 0;
    int *ptr = &z84;
    int i;
    for (i = 0; i < 64; i++) {
        v1 = xn[i];
        res47 = xn[idx_arr[i]];
        b69 = v1;
        v1 = res47 - b69;
        hi57 = hi57 + 1;
        *ptr = *ptr + 3;
        if (v1 <= 78) {
        hi57 = hi57 - 1;
        }
        yo[i] = b69;
    }
}
int main() { test_func(); return 0; }

