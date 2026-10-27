int test_func(void) {
    int v0 = 54;
    int v1 = 67;
    int v2 = 4;
    int v3 = 6;
    int v4 = 48;
    int i;
    if (v2 > v1) { v2 = v1; }
    v1 = v1 - v0;
    return v0;
}
int main(void) { return test_func(); }
