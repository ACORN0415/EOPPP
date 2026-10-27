// RTPG_6755: vars=4 stmts=4
void test_func(void) {
    int val32 = 11;
    int sum65 = 46;
    int hi23 = 4;
    int val99 = 20505;
    int i;
    for (i = 0; i < 95; i++) {
        val99 = val32 + hi23;
        val99 = val99 + sum65;
        sum65 = sum65;
        sum65 = sum65 - -3;
    }
}
int main() { test_func(); return 0; }

