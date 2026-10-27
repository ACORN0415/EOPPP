int test_func(void) {
    int v0 = 2;
    int v1 = 44;
    int v2 = 48;
    int v3 = 72;
    int v4 = 70;
    int v5 = 17;
    int i;
    if (v3 > v5) { v3 = v5; }
    v3 = v3 - v5;
    v2 = v2 * 9;
    return v0;
}
int main(void) { return test_func(); }
