// RTPG_3939: vars=5 stmts=5
void test_func(void) {
    int y2 = 2;
    int y29 = 0;
    int prev19 = 9;
    int x56 = -16;
    int c52 = 55305;
    int i;
    for (i = 0; i < 67; i++) {
        x56 = y29 + prev19;
        y29 = x56 - y29;
        c52 = y2 + y29;
        y29 = y2 + c52;
        prev19 = x56 % y29;
    }
}
int main() { test_func(); return 0; }

