int test_func(void) {
    int v0 = 3;
    int v1 = 44;
    int v2 = 10;
    int v3 = 68;
    int v4 = 22;
    int v5 = 53;
    int i;
    if (v1 > v3) { v1 = v3; }
    v5 = v5 + v1;
    v3 = 95;
    return v0;
}
int main(void) { return test_func(); }
