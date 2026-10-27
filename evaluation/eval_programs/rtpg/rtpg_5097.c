// RTPG_5097: vars=4 stmts=3
void test_func(void) {
    int prev16 = 77;
    int acc26 = 33660;
    int v1 = 38;
    int val37 = 2;
    int i;
    for (i = 0; i < 85; i++) {
        switch (prev16) {
            case 0: acc26 = 47646; break;
            case 1: prev16 = 20; break;
            default: break;
        }
        prev16 = prev16 + 1;
    }
}
int main() { test_func(); return 0; }

