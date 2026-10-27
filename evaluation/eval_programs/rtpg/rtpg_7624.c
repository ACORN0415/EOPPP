// RTPG_7624: vars=3 stmts=4
void test_func(void) {
    int cur8 = -36;
    int z55 = 9040;
    int out80 = 4;
    int i;
    for (i = 0; i < 9; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        out80 = out80 - 4;
        z55 = out80;
        z55 = out80 - out80;
        out80 = z55 + z55;
        }
    }
}
int main() { test_func(); return 0; }

