int test_func(void) {
    int v0 = 65;
    int v1 = 68;
    int v2 = 94;
    int v3 = 91;
    int v4 = 31;
    int v5 = 45;
    int i;
    v0 = v0 + v5;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
