// RTPG_6537: vars=3 stmts=5
void test_func(void) {
    int dat5 = 40;
    int prev83 = 34599;
    int out32 = 65;
    int i;
    for (i = 0; i < 19; i++) {
        out32 = out32;
        out32 = out32 + 1;
        out32 = out32 - prev83;
        prev83 = prev83;
        out32 = prev83 - out32;
        if (prev83 <= 17) {
        out32 = out32 + 3;
        }
    }
}
int main() { test_func(); return 0; }

