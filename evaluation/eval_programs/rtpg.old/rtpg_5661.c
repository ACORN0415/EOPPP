// RTPG_5661: vars=3 stmts=2
void test_func(void) {
    int tmp82 = 76;
    int dat95 = 3;
    int b32 = -3;
    int i;
    for (i = 0; i < 61; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        dat95 = b32 + 9;
        b32 = b32 + 0;
        }
    }
}
int main() { test_func(); return 0; }

