int test_func(void) {
    int v0 = 56;
    int v1 = 97;
    int v2 = 99;
    int i;
    v2 = 74;
    if (v0 > v0) { v0 = v0; }
    v2 = v2 + v2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
