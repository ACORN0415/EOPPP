// RTPG_6733: vars=6 stmts=5
int idx_arr[64];
void test_func(void) {
    int hi32 = 5975;
    int b20 = 3445;
    int acc49 = 75;
    int x98 = 8671;
    int out33 = 19;
    int cnt68 = 70;
    int *ptr = &out33;
    int i;
    for (i = 0; i < 75; i++) {
        acc49 = xn[idx_arr[i]];
        hi32 = b20;
        cnt68 = x98;
        x98 = out33 + 52596;
        cnt68 = x98;
        acc49 = x98 + out33;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

