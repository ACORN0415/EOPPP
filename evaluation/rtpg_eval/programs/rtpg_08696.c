int test_func(void) {
    int v0 = 95;
    int v1 = 64;
    int v2 = 52;
    int v3 = 30;
    int v4 = 92;
    int v5 = 80;
    int v6 = 94;
    int v7 = 39;
    int i;
    v0 = 3;
    v1 = v1 + v1;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
