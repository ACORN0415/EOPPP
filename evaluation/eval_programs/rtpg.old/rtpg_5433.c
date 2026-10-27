// RTPG_5433: vars=4 stmts=2
void test_func(void) {
    int tmp10 = 37;
    int res32 = 13;
    int v18 = 7;
    int z48 = 32;
    int *ptr = &z48;
    int i;
    for (i = 0; i < 48; i++) {
        res32 = res32 - 4;
        res32 = tmp10 + v18;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

