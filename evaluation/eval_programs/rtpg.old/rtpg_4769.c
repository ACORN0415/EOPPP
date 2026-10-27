// RTPG_4769: vars=8 stmts=6
void test_func(void) {
    int x48 = 2085;
    int z16 = 59487;
    int cnt17 = 19268;
    int b86 = -6;
    int v57 = 7;
    int z53 = 5;
    int z70 = 22;
    int z82 = 7;
    int i;
    for (i = 0; i < 36; i++) {
        cnt17 = z16 - cnt17;
        z16 = z16 - 4;
        z53 = v57 - z70;
        b86 = b86 - v57;
        z53 = z53 - 2;
        x48 = x48 + b86;
    }
}
int main() { test_func(); return 0; }

