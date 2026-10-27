// RTPG_8222: vars=3 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int cur15 = 21;
    int sum65 = 4;
    int res7 = 51;
    int i;
    for (i = 0; i < 16; i++) {
        cur15 = xn[i];
        cur15 = sum65 + res7;
        res7 = res7;
        res7 = res7 - sum65;
        cur15 = cur15 - 73;
        cur15 = sum65 - sum65;
        sum65 = res7 | cur15;
        sum65 = cur15 - 7;
        cur15 = cur15 | sum65;
        res7 = res7 - sum65;
        sum65 = cur15;
        yo[i] = cur15;
    }
}
int main() { test_func(); return 0; }

