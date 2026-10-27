// RTPG_7259: vars=5 stmts=3
int idx_arr[32];
void test_func(void) {
    int out40 = 42;
    int tmp47 = 3;
    int val95 = 26542;
    int dat59 = 100;
    int z65 = 26;
    int h0 = 49;
    int sv0 = 0;
    int h1 = 56558;
    int sv1 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        dat59 = xn[idx_arr[i]];
        val95 = dat59 * 7;
        z65 = z65 * -16;
        z65 = z65 + tmp47;
        if (z65 >= 80) {
        dat59 = dat59 - 1;
        }
    }
}
int main() { test_func(); return 0; }

