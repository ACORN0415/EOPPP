// RTPG_8103: vars=3 stmts=10
int xn[16];
int yo[16];
enum State { GREEN, FAST, OFF };
void test_func(void) {
    int prev16 = 48242;
    int z90 = 21;
    int b70 = 44;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 16; i++) {
        b70 = xn[i];
        z90 = z90 - 4;
        b70 = prev16 - 55;
        prev16 = z90;
        prev16 = z90 - prev16;
        z90 = b70 + 0;
        z90 = z90;
        z90 = z90 - 46;
        z90 = z90 + 3;
        z90 = z90 - prev16;
        b70 = prev16 - 64315;
        yo[i] = z90;
    }
}
int main() { test_func(); return 0; }

