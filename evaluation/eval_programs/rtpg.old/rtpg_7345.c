// RTPG_7345: vars=3 stmts=4
int idx_arr[32];
void test_func(void) {
    int z21 = -12;
    int b81 = 65456;
    int cur69 = 10;
    int i;
    for (i = 0; i < 54; i++) {
        switch (z21) {
            case 0: z21 = 14; break;
            case 1: z21 = 65177; break;
            default: break;
        }
        z21 = z21 + 1;
    }
}
int main() { test_func(); return 0; }

