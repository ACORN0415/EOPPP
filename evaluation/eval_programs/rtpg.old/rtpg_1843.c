// RTPG_1843: vars=5 stmts=12
int idx_arr[16];
void test_func(void) {
    int z33 = 5;
    int a81 = 4;
    int tmp14 = 16;
    int acc42 = 26;
    int b89 = 91;
    int *ptr = &tmp14;
    int i;
    for (i = 0; i < 34; i++) {
        b89 = xn[idx_arr[i]];
        b89 = tmp14 & acc42;
        b89 = z33;
        z33 = a81 | z33;
        tmp14 = acc42 + 60;
        b89 = b89 - z33;
        z33 = acc42 ^ acc42;
        b89 = tmp14 | tmp14;
        z33 = acc42 - a81;
        a81 = z33 | tmp14;
        tmp14 = z33 + a81;
        acc42 = b89 ^ acc42;
        b89 = z33 - 29;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

