int test_func(void) {
    int v0 = 27;
    int v1 = 10;
    int v2 = 60;
    int v3 = 74;
    int v4 = 42;
    int i;
    v1 = v1 * 5;
    v1 = v1 + v3;
    if (v3 > v4) { v3 = v4; }
    return v0;
}
int main(void) { return test_func(); }
