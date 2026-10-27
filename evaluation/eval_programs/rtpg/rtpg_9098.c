// RTPG_9098: vars=6 stmts=5
void test_func(void) {
    int val71 = 62405;
    int out41 = 5500;
    int z93 = 4;
    int y38 = 21;
    int lo82 = -8;
    int dat58 = 29;
    int i;
    for (i = 0; i < 32; i++) {
        switch (out41) {
            case 0: dat58 = 32476; break;
            case 1: dat58 = 58298; break;
            case 2: lo82 = 16; break;
            case 3: z93 = 8; break;
            default: break;
        }
        out41 = out41 + 1;
    }
}
int main() { test_func(); return 0; }

