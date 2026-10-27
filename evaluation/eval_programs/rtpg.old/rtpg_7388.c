// RTPG_7388: vars=4 stmts=5
void test_func(void) {
    int prev18 = 42893;
    int a55 = 38846;
    int a74 = 82;
    int acc85 = 8;
    int i;
    for (i = 0; i < 96; i++) {
        a74 = a74 + a74;
        a74 = prev18 + 52;
        acc85 = a55 + 9720;
        a55 = a55 - prev18;
        a74 = acc85 & acc85;
    }
}
int main() { test_func(); return 0; }

