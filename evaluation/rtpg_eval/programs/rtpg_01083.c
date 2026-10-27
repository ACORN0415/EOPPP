int test_func(void) {
    int v0 = 78;
    int v1 = 85;
    int v2 = 4;
    int v3 = 36;
    int v4 = 5;
    int i;
    if (v3 > v0) { v3 = v0; }
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
