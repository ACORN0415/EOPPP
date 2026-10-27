int test_func(void) {
    int v0 = 57;
    int v1 = 12;
    int v2 = 35;
    int v3 = 98;
    int v4 = 18;
    int v5 = 28;
    int i;
    v3 = v3 * 5;
    v5 = v5 + v2;
    if (v5 > v0) { v5 = v0; }
    return v0;
}
int main(void) { return test_func(); }
