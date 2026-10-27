// RTPG_4176: vars=7 stmts=3
void test_func(void) {
    int out74 = 9;
    int hi98 = -38;
    int v81 = 13266;
    int v80 = 45;
    int hi18 = 19893;
    int cur39 = 19;
    int acc32 = -20;
    int *ptr = &hi98;
    int i;
    for (i = 0; i < 6; i++) {
        hi18 = out74 + hi18;
        hi18 = v81 - v80;
        hi18 = out74;
        *ptr = *ptr + 2;
        if (v81 <= 8) {
        hi98 = hi98 + 5;
        }
    }
}
int main() { test_func(); return 0; }

