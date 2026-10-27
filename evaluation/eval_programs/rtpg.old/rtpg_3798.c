// RTPG_3798: vars=5 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int sum4 = 11554;
    int v51 = 47;
    int sum18 = 65;
    int lo20 = 29438;
    int z93 = 28453;
    int h0 = 4625;
    int sv0 = 0;
    int h1 = -35;
    int sv1 = 0;
    int i;
    for (i = 0; i < 6; i++) {
        switch (v51) {
            case 0: sum18 = 90; break;
            case 1: sum18 = 95; break;
            case 2: z93 = -22; break;
            case 3: z93 = 55829; break;
            default: break;
        }
        v51 = v51 + 1;
    }
}
int main() { test_func(); return 0; }

