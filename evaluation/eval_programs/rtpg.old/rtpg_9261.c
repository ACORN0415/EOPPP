// RTPG_9261: vars=6 stmts=11
void test_func(void) {
    int val40 = 26;
    int cur44 = 23;
    int res59 = 26;
    int z22 = 50;
    int v94 = 10;
    int b50 = -37;
    int *ptr = &v94;
    int i;
    for (i = 0; i < 30; i++) {
        switch (cur44) {
            case 0: cur44 = 27; break;
            case 1: res59 = 5; break;
            default: break;
        }
        cur44 = cur44 + 1;
    }
}
int main() { test_func(); return 0; }

