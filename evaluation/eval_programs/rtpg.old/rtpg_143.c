// RTPG_143: vars=3 stmts=3
void test_func(void) {
    int v62 = 3;
    int hi99 = 37;
    int a68 = 14;
    int i;
    for (i = 0; i < 64; i++) {
        a68 = a68;
        hi99 = v62 + 15931;
        a68 = hi99 - a68;
    }
}
int main() { test_func(); return 0; }

