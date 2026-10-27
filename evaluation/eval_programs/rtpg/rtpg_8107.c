// RTPG_8107: vars=5 stmts=6
void test_func(void) {
    int tmp16 = 7498;
    int b78 = 89;
    int tmp15 = -11;
    int b61 = -50;
    int prev3 = 2;
    int i;
    for (i = 0; i < 78; i++) {
        tmp16 = prev3 - 5;
        b61 = b61 + 1;
        b78 = b78 - 3;
        prev3 = b61 / prev3;
        b78 = prev3 / b61;
        b78 = b78 + b78;
        if (b78 != -30) {
        prev3 = b78 + 59;
        }
    }
}
int main() { test_func(); return 0; }

