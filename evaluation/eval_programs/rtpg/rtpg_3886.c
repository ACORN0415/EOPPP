// RTPG_3886: vars=3 stmts=4
void test_func(void) {
    int lo70 = 21396;
    int tmp63 = -10;
    int cur4 = 56670;
    int i;
    for (i = 0; i < 97; i++) {
        tmp63 = tmp63 + cur4;
        tmp63 = tmp63 + 1;
        cur4 = lo70 + tmp63;
        tmp63 = lo70;
    }
}
int main() { test_func(); return 0; }

