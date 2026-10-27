int test_func(void) {
    int v0 = 75;
    int v1 = 45;
    int v2 = 100;
    int v3 = 60;
    int v4 = 41;
    int v5 = 94;
    int v6 = 31;
    int i;
    if (v3 > v5) { v3 = v5; }
    v0 = v0 + v0;
    return v0;
}
int main(void) { return test_func(); }
