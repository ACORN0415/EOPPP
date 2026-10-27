int test_func(void) {
    int v0 = 29;
    int v1 = 3;
    int v2 = 46;
    int v3 = 51;
    int v4 = 65;
    int i;
    if (v1 > v3) { v1 = v3; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v4 = v4 | v1;
    return v0;
}
int main(void) { return test_func(); }
