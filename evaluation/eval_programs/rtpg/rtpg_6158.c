// RTPG_6158: vars=5 stmts=3
void test_func(void) {
    int v22 = 1;
    int b65 = 41804;
    int y40 = 20;
    int lo66 = 64;
    int tmp43 = 7;
    int *ptr = &tmp43;
    int i;
    for (i = 0; i < 22; i++) {
        b65 = b65 + 5;
        b65 = y40 + v22;
        v22 = lo66 - 4;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

