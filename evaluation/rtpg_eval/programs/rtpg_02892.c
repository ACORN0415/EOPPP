int test_func(void) {
    int v0 = 0;
    int v1 = 90;
    int v2 = 6;
    int v3 = 50;
    int v4 = 34;
    int i;
    v3 = 77;
    if (v1 > v3) { v1 = v3; }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
