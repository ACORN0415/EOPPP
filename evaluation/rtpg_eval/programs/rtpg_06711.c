int test_func(void) {
    int v0 = 69;
    int v1 = 70;
    int v2 = 65;
    int v3 = 44;
    int v4 = 100;
    int i;
    if (v1 > v2) { v1 = v2; }
    v4 = v4 * 7;
    v4 = v4 + v3;
    return v0;
}
int main(void) { return test_func(); }
