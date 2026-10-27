// RTPG_1140: vars=4 stmts=5
void test_func(void) {
    int lo48 = 73;
    int out1 = 34;
    int x94 = 8;
    int a5 = 5;
    int i;
    for (i = 0; i < 44; i++) {
        x94 = lo48 - x94;
        lo48 = lo48 - 2;
        x94 = lo48;
        out1 = out1 + lo48;
        out1 = lo48 - 8;
        if (a5 < -47) {
        lo48 = a5 + a5;
        }
    }
}
int main() { test_func(); return 0; }

