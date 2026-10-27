// RTPG_3803: vars=3 stmts=7
void test_func(void) {
    int lo7 = 37;
    int lo51 = 6;
    int lo13 = -12;
    int i;
    for (i = 0; i < 85; i++) {
        switch (lo7) {
            case 0: lo13 = -40; break;
            case 1: lo51 = 0; break;
            case 2: lo13 = 30; break;
            case 3: lo13 = 34; break;
            default: break;
        }
        lo7 = lo7 + 1;
    }
}
int main() { test_func(); return 0; }

