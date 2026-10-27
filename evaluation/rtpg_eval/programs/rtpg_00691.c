int test_func(void) {
    int v0 = 48;
    int v1 = 35;
    int v2 = 64;
    int v3 = 3;
    int v4 = 50;
    int i;
    v2 = v2 + v3;
    v1 = v1 * 4;
    if (v4 > v2) { v4 = v2; }
    v1 = v1 - v4;
    return v0;
}
int main(void) { return test_func(); }
