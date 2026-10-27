// RTPG_8752: vars=5 stmts=7
void test_func(void) {
    int hi84 = 28868;
    int acc47 = 6;
    float res10 = 66.51;
    int out20 = -5;
    int tmp2 = 27;
    int i;
    for (i = 0; i < 24; i++) {
        res10 = acc47 + tmp2;
        tmp2 = hi84 + tmp2;
        acc47 = acc47 + tmp2;
        acc47 = res10 + 55039;
        hi84 = hi84 + 4;
        res10 = out20 + tmp2;
        res10 = out20 + -46;
        if (res10 != 37) {
        acc47 = acc47 + res10;
        }
    }
}
int main() { test_func(); return 0; }

