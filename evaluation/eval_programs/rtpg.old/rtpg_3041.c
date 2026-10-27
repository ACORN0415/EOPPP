// RTPG_3041: vars=3 stmts=4
void test_func(void) {
    float hi14 = 79.54;
    int tmp20 = 44;
    int v2 = 22;
    int *ptr = &tmp20;
    int i;
    for (i = 0; i < 77; i++) {
        hi14 = v2;
        tmp20 = tmp20 - 1;
        v2 = v2 - 2;
        tmp20 = tmp20 + v2;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

