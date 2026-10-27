int test_func(void) {
    int v0 = 84;
    int v1 = 80;
    int v2 = 13;
    int v3 = 26;
    int v4 = 12;
    int i;
    v2 = v2 - v0;
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
