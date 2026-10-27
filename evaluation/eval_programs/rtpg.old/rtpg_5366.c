// RTPG_5366: vars=3 stmts=11
void test_func(void) {
    int x8 = -26;
    int out58 = 60;
    int dat10 = 14;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 57578;
    int sv1 = 0;
    int i;
    for (i = 0; i < 36; i++) {
        dat10 = x8 + dat10;
        dat10 = out58 + dat10;
        out58 = dat10;
        x8 = out58 - 45;
        x8 = x8 - dat10;
        out58 = dat10 * 0;
        out58 = x8 * 46164;
        x8 = out58 + 9;
        x8 = x8 - 4;
        x8 = out58 * 6;
        dat10 = dat10 + out58;
        if (out58 > 66) {
        out58 = x8;
        }
    }
}
int main() { test_func(); return 0; }

