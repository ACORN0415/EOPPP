int test_func(void) {
    int v0 = 66;
    int v1 = 97;
    int v2 = 59;
    int v3 = 71;
    int v4 = 7;
    int v5 = 40;
    int v6 = 94;
    int v7 = 51;
    int i;
    if (v1 > v3) { v1 = v3; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
