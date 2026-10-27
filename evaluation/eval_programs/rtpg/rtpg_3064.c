// RTPG_3064: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int v48 = 33;
    int cur78 = 0;
    int tmp72 = 37847;
    int val72 = 5289;
    int i;
    for (i = 0; i < 16; i++) {
        cur78 = xn[i];
        tmp72 = tmp72 + v48;
        v48 = v48 % tmp72;
        tmp72 = cur78 - tmp72;
        if (tmp72 <= -27) {
        val72 = val72 - 2;
        }
        yo[i] = val72;
    }
}
int main() { test_func(); return 0; }

