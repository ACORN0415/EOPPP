// RTPG_3958: vars=4 stmts=4
void test_func(void) {
    int a36 = 0;
    int prev45 = 85;
    int c0 = 57;
    int acc70 = 7;
    int i;
    for (i = 0; i < 23; i++) {
        switch (prev45) {
            case 0: prev45 = 1; break;
            case 1: c0 = 52; break;
            default: break;
        }
        prev45 = prev45 + 1;
    }
}
int main() { test_func(); return 0; }

