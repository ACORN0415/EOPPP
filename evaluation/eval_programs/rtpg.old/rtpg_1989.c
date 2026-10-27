// RTPG_1989: vars=4 stmts=3
void test_func(void) {
    int y16 = 10;
    int x25 = 40;
    int z57 = 40;
    int cur50 = -16;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 32817;
    int sv1 = 0;
    int i;
    for (i = 0; i < 67; i++) {
        switch (z57) {
            case 0: x25 = 9; break;
            case 1: x25 = -8; break;
            case 2: x25 = 31; break;
            case 3: cur50 = 63646; break;
            default: break;
        }
        z57 = z57 + 1;
    }
}
int main() { test_func(); return 0; }

