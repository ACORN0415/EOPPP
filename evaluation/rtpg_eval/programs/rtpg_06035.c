int test_func(void) {
    int v0 = 14;
    int v1 = 43;
    int v2 = 14;
    int v3 = 26;
    int v4 = 35;
    int v5 = 28;
    int i;
    if (v1 > v3) { v1 = v3; }
    v3 = v3 - v4;
    v3 = 6;
    return v0;
}
int main(void) { return test_func(); }
