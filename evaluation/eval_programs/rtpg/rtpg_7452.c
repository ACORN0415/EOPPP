// RTPG_7452: vars=8 stmts=2
void test_func(void) {
    int hi32 = 5;
    int a35 = 10;
    int res54 = 5;
    int acc96 = -44;
    int a77 = 4;
    int res84 = 37330;
    int v73 = 6;
    int val54 = 0;
    int i;
    for (i = 0; i < 10; i++) {
        switch (a77) {
            case 0: res84 = 4; break;
            case 1: v73 = 44549; break;
            case 2: val54 = 9; break;
            default: break;
        }
        a77 = a77 + 1;
    }
}
int main() { test_func(); return 0; }

