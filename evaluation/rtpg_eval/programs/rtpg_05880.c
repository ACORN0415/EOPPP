int test_func(void) {
    int v0 = 62;
    int v1 = 91;
    int v2 = 94;
    int v3 = 71;
    int v4 = 28;
    int v5 = 38;
    int v6 = 5;
    int i;
    v2 = 36;
    v2 = v2 % (v6 + 1);
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
