int test_func(void) {
    int v0 = 56;
    int v1 = 11;
    int v2 = 72;
    int v3 = 25;
    int v4 = 28;
    int v5 = 25;
    int v6 = 28;
    int v7 = 3;
    int i;
    v5 = v5 + v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
