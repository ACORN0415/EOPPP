// RTPG_9862: vars=8 stmts=11
void test_func(void) {
    int prev74 = 19;
    int x28 = 4852;
    int out30 = 38972;
    float b15 = 36.29;
    int tmp68 = 31457;
    int x83 = 1;
    int b28 = 5;
    int x69 = 3466;
    int i;
    for (i = 0; i < 72; i++) {
        x69 = prev74 - x28;
        x69 = b15 + prev74;
        b28 = out30 - b28;
        x28 = b28 + tmp68;
        out30 = out30 - 5;
        b15 = b15 - 4;
        out30 = prev74 + b28;
        x83 = tmp68;
        b28 = tmp68;
        tmp68 = tmp68 + 59;
        x28 = x28 + 1;
        if (out30 == -50) {
        b15 = b15 - 2;
        }
    }
}
int main() { test_func(); return 0; }

