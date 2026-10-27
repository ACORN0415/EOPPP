// RTPG_4306: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int z55 = -37;
    int acc17 = 6;
    int z42 = 26;
    int y55 = 0;
    int i;
    for (i = 0; i < 93; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        z42 = z42 - z55;
        z55 = y55;
        acc17 = z55 - -28;
        z55 = y55 - 6;
        z42 = y55;
        }
    }
}
int main() { test_func(); return 0; }

