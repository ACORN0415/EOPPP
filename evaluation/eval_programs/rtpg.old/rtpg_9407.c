// RTPG_9407: vars=5 stmts=4
void test_func(void) {
    int res67 = 56632;
    int val99 = 46;
    int v81 = 84;
    int hi64 = 8;
    int prev31 = 67;
    int i;
    for (i = 0; i < 97; i++) {
        val99 = prev31;
        prev31 = v81;
        v81 = res67 - hi64;
        v81 = prev31 - 43;
    }
}
int main() { test_func(); return 0; }

