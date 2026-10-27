int test_func(void) {
    int v0 = 100;
    int v1 = 11;
    int v2 = 51;
    int v3 = 65;
    int v4 = 60;
    int i;
    v3 = 7;
    v2 = v2 - v4;
    v4 = v4 * 8;
    if (v3 > v0) { v3 = v0; }
    return v0;
}
int main(void) { return test_func(); }
