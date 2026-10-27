// RTPG_523: vars=5 stmts=2
void test_func(void) {
    int z51 = -34;
    int x90 = -40;
    int v88 = 77;
    int cnt64 = 18969;
    int dat25 = 8;
    int *ptr = &v88;
    int i;
    for (i = 0; i < 98; i++) {
        cnt64 = x90 + 2;
        dat25 = cnt64;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

