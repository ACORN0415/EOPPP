int test_func(void) {
    int v0 = 71;
    int v1 = 12;
    int v2 = 48;
    int v3 = 31;
    int i;
    v2 = v2 + v1;
    v1 = v1 - v3;
    v1 = v1 * 4;
    if (v3 > v0) { v3 = v0; }
    return v0;
}
int main(void) { return test_func(); }
