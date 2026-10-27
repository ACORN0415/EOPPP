// RTPG_1895: vars=6 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int prev35 = 49;
    int hi31 = 83;
    int acc91 = 3;
    int res10 = -22;
    int prev80 = 16377;
    int cur68 = 2;
    int *ptr = &prev80;
    int i;
    for (i = 0; i < 26; i++) {
        switch (prev35) {
            case 0: acc91 = 21354; break;
            case 1: acc91 = 63; break;
            case 2: prev80 = 66; break;
            case 3: acc91 = 6; break;
            default: break;
        }
        prev35 = prev35 + 1;
    }
}
int main() { test_func(); return 0; }

