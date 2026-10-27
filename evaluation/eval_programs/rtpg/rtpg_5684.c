// RTPG_5684: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int a17 = 50567;
    int cur35 = -26;
    int acc18 = 17;
    int i;
    for (i = 0; i < 16; i++) {
        acc18 = xn[i];
        cur35 = cur35 + cur35;
        acc18 = acc18 + 4;
        acc18 = acc18 - 4;
        a17 = acc18 + acc18;
        if (acc18 > 74) {
        acc18 = cur35 - a17;
        }
        yo[i] = a17;
    }
}
int main() { test_func(); return 0; }

