// RTPG_4837: vars=8 stmts=6
void test_func(void) {
    int z16 = 2085;
    int x48 = 59487;
    int v57 = 19268;
    int z82 = -6;
    int z53 = 7;
    int cnt17 = 5;
    int b86 = 22;
    int z70 = 7;
    int i;
    for (i = 0; i < 36; i++) {
        v57 = x48 - v57;
        x48 = x48 - 4;
        cnt17 = z53 - b86;
        z82 = z82 - z53;
        cnt17 = cnt17 - 2;
        z16 = z16 + z82;
    }
}
int main() { test_func(); return 0; }

