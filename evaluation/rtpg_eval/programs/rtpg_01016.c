int test_func(void) {
    int v0 = 8;
    int v1 = 6;
    int v2 = 37;
    int v3 = 45;
    int v4 = 65;
    int v5 = 37;
    int v6 = 50;
    int v7 = 15;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 - v1;
    return v0;
}
int main(void) { return test_func(); }
