// RTPG_1552: vars=5 stmts=3
void test_func(void) {
    int hi62 = 40;
    int v32 = -11;
    int prev4 = 45;
    int cnt13 = 7011;
    int a21 = 13632;
    int i;
    for (i = 0; i < 100; i++) {
        switch (v32) {
            case 0: a21 = 1; break;
            case 1: prev4 = 35; break;
            case 2: hi62 = 55; break;
            case 3: hi62 = 31; break;
            default: break;
        }
        v32 = v32 + 1;
    }
}
int main() { test_func(); return 0; }

