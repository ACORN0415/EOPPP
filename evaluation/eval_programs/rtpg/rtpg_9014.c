// RTPG_9014: vars=5 stmts=11
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int cur51 = 9;
    int b32 = 1;
    int prev54 = 37;
    int x4 = 96;
    int tmp44 = 33;
    int i;
    for (i = 0; i < 64; i++) {
        b32 = xn[i];
        tmp44 = xn[idx_arr[i]];
        b32 = b32 + x4;
        prev54 = prev54 - 99;
        b32 = prev54 + x4;
        cur51 = tmp44;
        cur51 = tmp44 + x4;
        tmp44 = b32;
        x4 = x4 + 2;
        prev54 = prev54 + 0;
        tmp44 = cur51;
        tmp44 = x4;
        tmp44 = b32 + tmp44;
        yo[i] = x4;
    }
}
int main() { test_func(); return 0; }

