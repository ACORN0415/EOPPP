// RTPG_9680: vars=5 stmts=8
void test_func(void) {
    int lo81 = 51854;
    int cnt77 = -30;
    int v44 = 9;
    int cur54 = 85;
    int b60 = 45;
    int *ptr = &lo81;
    int i;
    for (i = 0; i < 61; i++) {
        lo81 = v44 + b60;
        cur54 = cnt77;
        b60 = cur54 + 33;
        b60 = cnt77;
        b60 = b60 - v44;
        cnt77 = v44 + b60;
        cnt77 = cnt77 - 13092;
        cur54 = v44;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

