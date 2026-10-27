// RTPG_7329: vars=5 stmts=3
int idx_arr[32];
void test_func(void) {
    int z65 = 42;
    int out40 = 3;
    int val95 = 26542;
    int tmp47 = 100;
    int dat59 = 26;
    int h0 = 49;
    int sv0 = 0;
    int h1 = 56558;
    int sv1 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        tmp47 = xn[idx_arr[i]];
        val95 = tmp47 * 7;
        dat59 = dat59 * -16;
        dat59 = dat59 + out40;
        if (dat59 >= 80) {
        tmp47 = tmp47 - 1;
        }
    }
}
int main() { test_func(); return 0; }

