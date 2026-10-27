// RTPG_9084: vars=4 stmts=4
void test_func(void) {
    int sum25 = 91;
    int res59 = 2;
    int prev99 = 48;
    int v14 = 36;
    int i;
    for (i = 0; i < 60; i++) {
        v14 = v14 - v14;
        res59 = v14 + v14;
        prev99 = sum25 + res59;
        v14 = v14 & res59;
    }
}
int main() { test_func(); return 0; }

