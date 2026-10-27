int test_func(void) {
    int v0 = 100;
    int v1 = 72;
    int v2 = 8;
    int v3 = 57;
    int i;
    if (v1 > v3) { v1 = v3; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
