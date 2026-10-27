// RTPG_1973: vars=3 stmts=3
void test_func(void) {
    float tmp62 = 68.85;
    int hi5 = -25;
    float hi19 = 57.60;
    int i;
    for (i = 0; i < 73; i++) {
        hi5 = tmp62 + hi19;
        hi19 = tmp62;
        hi5 = tmp62 - hi5;
        if (tmp62 < 55) {
        hi19 = tmp62;
        }
    }
}
int main() { test_func(); return 0; }

