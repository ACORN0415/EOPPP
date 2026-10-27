int test_func(void) {
    int v0 = 20;
    int v1 = 7;
    int v2 = 2;
    int v3 = 59;
    int v4 = 32;
    int v5 = 31;
    int v6 = 61;
    int v7 = 70;
    int i;
    if (v3 > v4) { v3 = v4; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
