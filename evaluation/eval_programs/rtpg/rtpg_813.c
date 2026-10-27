// RTPG_813: vars=7 stmts=5
void test_func(void) {
    float c12 = 10.16;
    float x67 = 93.61;
    int tmp75 = 63;
    int prev39 = 89;
    int z46 = 2;
    int out84 = 10;
    int a74 = 10253;
    int *ptr = &tmp75;
    int i;
    for (i = 0; i < 18; i++) {
        out84 = tmp75;
        tmp75 = z46 - c12;
        z46 = prev39;
        prev39 = prev39 - 2;
        tmp75 = tmp75 - 4;
        *ptr = *ptr + 4;
        if (x67 != -42) {
        tmp75 = tmp75 - 4;
        }
    }
}
int main() { test_func(); return 0; }

