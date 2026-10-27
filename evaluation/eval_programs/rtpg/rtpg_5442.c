// RTPG_5442: vars=5 stmts=4
void test_func(void) {
    int prev67 = 28033;
    int acc48 = 48;
    int v7 = 1;
    int z10 = 29834;
    int lo15 = -14;
    int i;
    for (i = 0; i < 34; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        v7 = lo15 - prev67;
        z10 = lo15 + 3;
        prev67 = prev67 + 4;
        v7 = acc48 - prev67;
        }
    }
}
int main() { test_func(); return 0; }

