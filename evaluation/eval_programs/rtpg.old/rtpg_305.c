// RTPG_305: vars=5 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int hi58 = 59841;
    int val37 = 7;
    int b75 = 59;
    int sum29 = 98;
    int tmp99 = 20;
    int i;
    for (i = 0; i < 16; i++) {
        hi58 = xn[i];
        tmp99 = sum29 - hi58;
        hi58 = tmp99 - tmp99;
        b75 = val37;
        tmp99 = tmp99 + 5;
        yo[i] = tmp99;
    }
}
int main() { test_func(); return 0; }

