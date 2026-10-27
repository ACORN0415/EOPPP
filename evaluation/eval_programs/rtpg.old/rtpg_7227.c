// RTPG_7227: vars=6 stmts=4
int idx_arr[64];
void test_func(void) {
    int c90 = 20340;
    int prev43 = 45;
    int val15 = 86;
    int tmp26 = 27;
    int z94 = 62345;
    int hi15 = 82;
    int i;
    for (i = 0; i < 10; i++) {
        switch (prev43) {
            case 0: prev43 = 17; break;
            case 1: hi15 = 79; break;
            case 2: hi15 = 54276; break;
            case 3: prev43 = 55558; break;
            default: break;
        }
        prev43 = prev43 + 1;
    }
}
int main() { test_func(); return 0; }

