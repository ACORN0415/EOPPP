// RTPG_7827: vars=5 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int z4 = 37257;
    int c67 = -37;
    int lo9 = 25794;
    int dat91 = 8;
    int y28 = 6;
    int i;
    for (i = 0; i < 7; i++) {
        switch (z4) {
            case 0: lo9 = 24470; break;
            case 1: dat91 = 36; break;
            case 2: lo9 = 3; break;
            default: break;
        }
        z4 = z4 + 1;
    }
}
int main() { test_func(); return 0; }

