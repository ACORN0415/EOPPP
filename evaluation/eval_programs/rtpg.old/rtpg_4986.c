// RTPG_4986: vars=6 stmts=5
void test_func(void) {
    int b45 = 50;
    int b36 = 8;
    int v39 = 7;
    int cur84 = 3;
    int res42 = 6;
    int a50 = 3;
    int i;
    for (i = 0; i < 42; i++) {
        switch (res42) {
            case 0: v39 = 1; break;
            case 1: b45 = 7; break;
            case 2: a50 = 3; break;
            case 3: cur84 = 21941; break;
            default: break;
        }
        res42 = res42 + 1;
    }
}
int main() { test_func(); return 0; }

