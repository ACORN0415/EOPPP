int test_func(void) {
    int v0 = 80;
    int v1 = 57;
    int v2 = 23;
    int v3 = 49;
    int v4 = 33;
    int v5 = 11;
    int i;
    if (v5 > v0) { v5 = v0; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
