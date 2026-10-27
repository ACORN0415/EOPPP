// RTPG_973: vars=4 stmts=4
void test_func(void) {
    int cur41 = -50;
    int val80 = 17;
    int cur77 = 88;
    int out57 = 16601;
    int i;
    for (i = 0; i < 12; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        cur41 = cur77 - out57;
        cur77 = cur41 - val80;
        cur77 = cur77;
        cur77 = cur77 + 5;
        }
    }
}
int main() { test_func(); return 0; }

