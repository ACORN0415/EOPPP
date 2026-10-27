// RTPG_5239: vars=3 stmts=3
void test_func(void) {
    int acc21 = 28;
    int lo60 = 1;
    int val51 = 9;
    int h0 = 90;
    int sv0 = 0;
    int h1 = 91;
    int sv1 = 0;
    int i;
    for (i = 0; i < 15; i++) {
        switch (acc21) {
            case 0: acc21 = 64623; break;
            case 1: acc21 = 7; break;
            case 2: val51 = 10; break;
            case 3: acc21 = 4; break;
            default: break;
        }
        acc21 = acc21 + 1;
    }
}
int main() { test_func(); return 0; }

