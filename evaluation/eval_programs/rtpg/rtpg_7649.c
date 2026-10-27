// RTPG_7649: vars=5 stmts=4
void test_func(void) {
    int a2 = 59;
    int a32 = 76;
    int x38 = 25;
    int cur29 = 97;
    int lo86 = -32;
    int i;
    for (i = 0; i < 83; i++) {
        x38 = a32 + x38;
        x38 = x38 - a32;
        x38 = x38;
        a2 = cur29;
        if (a32 < -44) {
        a32 = x38 + a2;
        }
    }
}
int main() { test_func(); return 0; }

