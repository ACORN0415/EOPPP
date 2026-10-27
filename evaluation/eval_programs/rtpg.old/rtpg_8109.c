// RTPG_8109: vars=3 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int sum65 = 21;
    int res7 = 4;
    int cur15 = 51;
    int i;
    for (i = 0; i < 16; i++) {
        sum65 = xn[i];
        sum65 = res7 + cur15;
        cur15 = cur15;
        cur15 = cur15 - res7;
        sum65 = sum65 - 73;
        sum65 = res7 - res7;
        res7 = cur15 | sum65;
        res7 = sum65 - 7;
        sum65 = sum65 | sum65;
        cur15 = cur15 - res7;
        res7 = sum65;
        yo[i] = sum65;
    }
}
int main() { test_func(); return 0; }

