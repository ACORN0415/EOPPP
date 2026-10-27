// RTPG_1109: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int v47 = 9;
    int cnt58 = 32;
    int prev48 = 9717;
    int prev85 = -7;
    int y52 = 39290;
    int i;
    for (i = 0; i < 64; i++) {
        cnt58 = xn[i];
        cnt58 = cnt58 + 4;
        prev48 = cnt58 & prev48;
        y52 = cnt58;
        v47 = v47 + 4;
        if (cnt58 != 74) {
        prev85 = prev85;
        }
        yo[i] = cnt58;
    }
}
int main() { test_func(); return 0; }

