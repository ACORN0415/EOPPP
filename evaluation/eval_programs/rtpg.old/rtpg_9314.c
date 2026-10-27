// RTPG_9314: vars=3 stmts=5
void test_func(void) {
    int prev35 = -4;
    int tmp9 = -30;
    int dat94 = 55;
    int *ptr = &tmp9;
    int h0 = 36066;
    int sv0 = 0;
    int h1 = -46;
    int sv1 = 0;
    int i;
    for (i = 0; i < 21; i++) {
        tmp9 = tmp9 * 6;
        dat94 = prev35 - tmp9;
        prev35 = tmp9 * 23;
        dat94 = prev35 + 19;
        tmp9 = tmp9;
        *ptr = *ptr + 2;
        if (tmp9 < 35) {
        dat94 = dat94 + 4;
        }
    }
}
int main() { test_func(); return 0; }

