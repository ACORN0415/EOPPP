// RTPG_6435: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int x48 = 5;
    int tmp14 = -20;
    int acc5 = 35267;
    int tmp22 = -37;
    int z62 = 47;
    int i;
    for (i = 0; i < 64; i++) {
        tmp14 = xn[i];
        tmp14 = tmp14 - 3;
        tmp14 = tmp22 + 8;
        acc5 = x48 + tmp14;
        x48 = tmp22 - x48;
        if (tmp14 >= 54) {
        acc5 = tmp22;
        }
        yo[i] = z62;
    }
}
int main() { test_func(); return 0; }

