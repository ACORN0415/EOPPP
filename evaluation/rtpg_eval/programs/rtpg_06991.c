int test_func(void) {
    int v0 = 20;
    int v1 = 76;
    int v2 = 15;
    int v3 = 54;
    int v4 = 96;
    int i;
    v0 = v0 + v0;
    v2 = v2 - v0;
    if (v2 > v4) { v2 = v4; }
    return v0;
}
int main(void) { return test_func(); }
