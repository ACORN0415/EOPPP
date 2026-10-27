// RTPG_6273: vars=6 stmts=5
void test_func(void) {
    int val69 = -38;
    int z0 = -42;
    int hi95 = 51;
    int tmp94 = 4;
    int y83 = 25;
    int tmp77 = 6;
    int i;
    for (i = 0; i < 5; i++) {
        switch (hi95) {
            case 0: tmp94 = 22881; break;
            case 1: y83 = 23; break;
            default: break;
        }
        hi95 = hi95 + 1;
    }
}
int main() { test_func(); return 0; }

