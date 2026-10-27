// RTPG_9304: vars=3 stmts=12
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int prev83 = 27028;
    int tmp22 = -35;
    int cur27 = 6;
    int *ptr = &cur27;
    int h0 = 70;
    int sv0 = 0;
    int h1 = 96;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        tmp22 = xn[i];
        cur27 = xn[idx_arr[i]];
        tmp22 = tmp22 + 4;
        tmp22 = tmp22 * -21;
        cur27 = tmp22 * 88;
        tmp22 = prev83;
        prev83 = cur27 - prev83;
        tmp22 = tmp22 + cur27;
        tmp22 = prev83 * 52;
        tmp22 = cur27 + prev83;
        cur27 = cur27 + 50201;
        tmp22 = tmp22 * 6;
        tmp22 = tmp22 + 4;
        tmp22 = prev83 - 3787;
        *ptr = *ptr + 4;
        if (prev83 >= 55) {
        prev83 = prev83;
        }
        yo[i] = cur27;
    }
}
int main() { test_func(); return 0; }

