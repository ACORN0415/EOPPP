int test_func(void) {
    int v0 = 51;
    int v1 = 72;
    int v2 = 6;
    int v3 = 98;
    int v4 = 6;
    int v5 = 33;
    int v6 = 0;
    int i;
    v3 = v3 - v6;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
