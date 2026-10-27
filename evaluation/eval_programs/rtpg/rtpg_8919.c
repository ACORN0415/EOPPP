// RTPG_8919: vars=5 stmts=5
void test_func(void) {
    int x7 = -12;
    int y8 = 1;
    int b74 = 8;
    int cur74 = 2;
    int val69 = 22;
    int i;
    for (i = 0; i < 96; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        b74 = x7;
        cur74 = y8 - x7;
        y8 = y8 - 3;
        x7 = y8 - b74;
        cur74 = x7 - cur74;
        }
    }
}
int main() { test_func(); return 0; }

