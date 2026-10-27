// RTPG_3632: vars=3 stmts=6
void test_func(void) {
    int x89 = 54481;
    int sum81 = 6;
    int out83 = -29;
    int i;
    for (i = 0; i < 22; i++) {
        sum81 = x89 - sum81;
        sum81 = out83 + x89;
        x89 = x89 - out83;
        x89 = sum81;
        out83 = x89 + x89;
        out83 = x89 - 18748;
        if (sum81 < -31) {
        x89 = sum81 + 31;
        }
    }
}
int main() { test_func(); return 0; }

