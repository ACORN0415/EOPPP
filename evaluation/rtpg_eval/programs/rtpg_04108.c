int test_func(void) {
    int v0 = 16;
    int v1 = 97;
    int v2 = 48;
    int v3 = 4;
    int v4 = 69;
    int i;
    v3 = v3 + v0;
    v1 = v1 - v0;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
