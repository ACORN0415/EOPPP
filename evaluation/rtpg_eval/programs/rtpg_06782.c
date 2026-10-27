int test_func(void) {
    int v0 = 81;
    int v1 = 28;
    int v2 = 46;
    int v3 = 64;
    int v4 = 65;
    int v5 = 59;
    int i;
    v5 = v5 - v4;
    if (v5 > v1) { v5 = v1; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
