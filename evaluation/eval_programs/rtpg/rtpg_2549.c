// RTPG_2549: vars=5 stmts=2
void test_func(void) {
    int hi5 = 48759;
    int hi11 = 9;
    int tmp55 = 50;
    int y11 = 4;
    int cnt25 = 44;
    int i;
    for (i = 0; i < 45; i++) {
        switch (y11) {
            case 0: y11 = -21; break;
            case 1: hi11 = 1; break;
            default: break;
        }
        y11 = y11 + 1;
    }
}
int main() { test_func(); return 0; }

