// RTPG_876: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int prev38 = 77;
    int b36 = 8;
    int dat27 = 7;
    int tmp78 = 7;
    int *ptr = &tmp78;
    int i;
    for (i = 0; i < 16; i++) {
        dat27 = xn[i];
        tmp78 = tmp78 + 3;
        tmp78 = tmp78 - 1;
        prev38 = prev38 - dat27;
        tmp78 = tmp78 + b36;
        tmp78 = tmp78 - 5;
        *ptr = *ptr + 4;
        yo[i] = tmp78;
    }
}
int main() { test_func(); return 0; }

