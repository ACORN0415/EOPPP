int test_func(void) {
    int v0 = 22;
    int v1 = 94;
    int v2 = 54;
    int v3 = 41;
    int v4 = 20;
    int v5 = 13;
    int i;
    v1 = v1 - v2;
    v0 = v0 + v2;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
