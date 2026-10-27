// RTPG_1745: vars=5 stmts=2
void test_func(void) {
    int prev51 = 40;
    int y97 = -9;
    int b63 = 39820;
    int acc3 = 50899;
    int v41 = 22475;
    int i;
    for (i = 0; i < 80; i++) {
        y97 = acc3 - prev51;
        acc3 = y97 + v41;
    }
}
int main() { test_func(); return 0; }

