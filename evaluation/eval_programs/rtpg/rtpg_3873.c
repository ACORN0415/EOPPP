// RTPG_3873: vars=5 stmts=3
int idx_arr[32];
void test_func(void) {
    int y58 = 77;
    int x18 = 9;
    int a29 = 5;
    int z86 = 8;
    int acc33 = 54;
    int i;
    for (i = 0; i < 16; i++) {
        a29 = xn[idx_arr[i]];
        z86 = x18;
        z86 = z86 - 4;
        a29 = a29 - y58;
        if (x18 != 22) {
        acc33 = z86 - x18;
        }
    }
}
int main() { test_func(); return 0; }

