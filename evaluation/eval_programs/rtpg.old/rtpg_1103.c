// RTPG_1103: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int sum74 = 3;
    int lo38 = 46;
    int a31 = 68;
    int acc74 = -24;
    int i;
    for (i = 0; i < 16; i++) {
        lo38 = xn[i];
        acc74 = sum74 + a31;
        acc74 = a31 + a31;
        if (sum74 <= 72) {
        lo38 = lo38 - sum74;
        }
        yo[i] = lo38;
    }
}
int main() { test_func(); return 0; }

