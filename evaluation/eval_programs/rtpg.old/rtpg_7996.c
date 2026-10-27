// RTPG_7996: vars=7 stmts=2
void test_func(void) {
    int a63 = 7152;
    int b72 = 42158;
    int prev67 = -8;
    int b22 = 10;
    int hi60 = 5;
    float cur58 = 25.59;
    int dat94 = 0;
    int *ptr = &dat94;
    int i;
    for (i = 0; i < 68; i++) {
        dat94 = b72 - hi60;
        hi60 = hi60 - 33139;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

