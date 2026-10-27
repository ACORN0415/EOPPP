int test_func(void) {
    int v0 = 50;
    int v1 = 3;
    int v2 = 90;
    int v3 = 7;
    int v4 = 37;
    int i;
    v4 = v4 + v2;
    if (v3 > v1) { v3 = v1; }
    v2 = v2 * 3;
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }
