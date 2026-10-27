// RTPG_3898: vars=3 stmts=6
void test_func(void) {
    int acc85 = 53;
    int dat10 = 9;
    int x1 = -27;
    int i;
    for (i = 0; i < 11; i++) {
        x1 = dat10 + -8;
        x1 = x1 - dat10;
        acc85 = acc85;
        acc85 = x1 + 72;
        acc85 = x1;
        acc85 = dat10 + acc85;
        if (acc85 <= -35) {
        dat10 = acc85 + dat10;
        }
    }
}
int main() { test_func(); return 0; }

