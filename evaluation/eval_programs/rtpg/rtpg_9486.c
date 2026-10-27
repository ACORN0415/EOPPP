// RTPG_9486: vars=3 stmts=6
void test_func(void) {
    float z37 = 51.95;
    double v12 = 16.57;
    double a64 = 47.08;
    int i;
    for (i = 0; i < 23; i++) {
        a64 = z37 + 60;
        a64 = a64 - 2;
        a64 = v12;
        z37 = z37 + a64;
        a64 = z37;
        z37 = v12 - a64;
        if (a64 >= -14) {
        a64 = a64;
        }
    }
}
int main() { test_func(); return 0; }

