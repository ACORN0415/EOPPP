int test_func(void) {
    int v0 = 77;
    int v1 = 18;
    int v2 = 82;
    int v3 = 69;
    int v4 = 82;
    int v5 = 22;
    int v6 = 89;
    int i;
    v1 = v1 - v0;
    v0 = 61;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
