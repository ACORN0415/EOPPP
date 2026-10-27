// RTPG_5424: vars=5 stmts=7
void test_func(void) {
    int tmp2 = 43;
    int v59 = 3;
    int sum50 = 54793;
    int res92 = 20;
    int sum65 = 51122;
    int i;
    for (i = 0; i < 9; i++) {
        tmp2 = v59 + sum65;
        sum50 = tmp2;
        tmp2 = sum50;
        v59 = v59 - 5;
        v59 = tmp2 + res92;
        res92 = sum65 - tmp2;
        tmp2 = sum50 - sum65;
        if (tmp2 >= -2) {
        tmp2 = sum65 + tmp2;
        }
    }
}
int main() { test_func(); return 0; }

