int test_func(void) {
    int v0 = 19;
    int v1 = 100;
    int v2 = 29;
    int v3 = 89;
    int v4 = 77;
    int i;
    if (v1 > v4) { v1 = v4; }
    v3 = v3 + v2;
    v1 = 77;
    return v0;
}
int main(void) { return test_func(); }
