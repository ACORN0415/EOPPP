int test_func(void) {
    int v0 = 24;
    int v1 = 76;
    int v2 = 83;
    int v3 = 16;
    int v4 = 2;
    int i;
    v3 = v3 + v2;
    v2 = 62;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
