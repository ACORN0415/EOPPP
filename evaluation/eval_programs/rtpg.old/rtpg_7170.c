// RTPG_7170: vars=4 stmts=4
void test_func(void) {
    int hi17 = 43;
    int x57 = 0;
    int out26 = 6813;
    int lo22 = 72;
    int i;
    for (i = 0; i < 32; i++) {
        x57 = x57 + 5;
        x57 = x57 - 1;
        out26 = hi17 - x57;
        x57 = lo22 - hi17;
        if (lo22 <= 52) {
        x57 = hi17 - 24284;
        }
    }
}
int main() { test_func(); return 0; }

