int test_func(void) {
    int v0 = 54;
    int v1 = 13;
    int v2 = 80;
    int v3 = 79;
    int v4 = 94;
    int i;
    if (v0 > v4) { v0 = v4; }
    v4 = v4 + v1;
    v1 = v1 * 6;
    return v0;
}
int main(void) { return test_func(); }
