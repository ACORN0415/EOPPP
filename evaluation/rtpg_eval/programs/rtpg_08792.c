int test_func(void) {
    int v0 = 79;
    int v1 = 44;
    int v2 = 76;
    int v3 = 20;
    int v4 = 98;
    int i;
    if (v0 > v2) { v0 = v2; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
