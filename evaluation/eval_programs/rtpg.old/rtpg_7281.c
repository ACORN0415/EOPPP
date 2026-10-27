// RTPG_7281: vars=8 stmts=2
void test_func(void) {
    int x47 = 7;
    int x77 = 4;
    int z95 = 49;
    int x76 = 10;
    int out84 = 7;
    int res70 = 38;
    int val54 = 14941;
    int val43 = 0;
    int i;
    for (i = 0; i < 66; i++) {
        switch (val43) {
            case 0: x47 = 6; break;
            case 1: x47 = 68; break;
            case 2: x47 = 61844; break;
            case 3: x47 = 67; break;
            default: break;
        }
        val43 = val43 + 1;
    }
}
int main() { test_func(); return 0; }

