// RTPG_1118: vars=4 stmts=5
void test_func(void) {
    int lo48 = 73;
    int x94 = 34;
    int a5 = 8;
    int out1 = 5;
    int i;
    for (i = 0; i < 44; i++) {
        a5 = lo48 - a5;
        lo48 = lo48 - 2;
        a5 = lo48;
        x94 = x94 + lo48;
        x94 = lo48 - 8;
        if (out1 < -47) {
        lo48 = out1 + out1;
        }
    }
}
int main() { test_func(); return 0; }

