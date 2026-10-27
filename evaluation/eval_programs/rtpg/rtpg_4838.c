// RTPG_4838: vars=3 stmts=2
void test_func(void) {
    int z91 = 57;
    int cur17 = 65435;
    int lo79 = 47;
    int i;
    for (i = 0; i < 83; i++) {
        switch (lo79) {
            case 0: z91 = 39414; break;
            case 1: z91 = 5; break;
            case 2: cur17 = 49932; break;
            default: break;
        }
        lo79 = lo79 + 1;
    }
}
int main() { test_func(); return 0; }

